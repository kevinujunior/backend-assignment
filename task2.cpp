// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

bool valid(int bulls, int maxGroup, int i, int j){
    if(i<maxGroup && j<maxGroup) return true;
    return false;
}

int getTopBulls(int bulls, int maxGroup, int k){
    if(bulls<=maxGroup) return 1;
    vector<vector<int>> curr(maxGroup, vector<int>(maxGroup, 0));
    int i = 0, j = 0;
    int total = 1;
    while(total<=bulls){
        curr[i][j] = total;
        if((j+1)%maxGroup==0){ 
            i++; 
            j=0;
        }
        else j++;
        total++;
    }
    int races = 1+(bulls+maxGroup-1)/maxGroup;
    queue<pair<int,int>> q;
    q.push({0,0});
    vector<vector<int>> vis(maxGroup, vector<int>(maxGroup, 0));
    vis[0][0] = 1;
    int remains = 0;
    while(q.size() && --k > 0){
        int sz = q.size();
        while(sz--){
            auto coord = q.front(); q.pop();
            int i = coord.first, j = coord.second;
            if(valid(bulls, maxGroup, i+1,j) && !vis[i+1][j] && curr[i+1][j]!=0) {            
                q.push({i+1,j});
                vis[i+1][j] = 1;
            }
            if(valid(bulls, maxGroup, i,j+1) && !vis[i][j+1] &&  curr[i][j+1]!=0) {
                q.push({i,j+1});
                vis[i][j+1] = 1;
            }
        }
        remains += q.size();
    }
    
    return races + getTopBulls(remains, maxGroup, k-1);
}
int main() {
    int bulls, maxGroup, k;
    cin>>bulls>>maxGroup>>k;
    cout<<getTopBulls(bulls,maxGroup,k);
    return 0;
    
}



// divide bulls into maxGroup groups (G1, G2, G3 ...)
// Race among all these groups amd let's say fastest in each group is (A1, A2, A3 ...)
// We race among A1 ,A2, A3 ... to get fastest 
// then we collect all candidates using bfs and do the same operation again
// We can note that when bulls<=maxGroups we only need one race.