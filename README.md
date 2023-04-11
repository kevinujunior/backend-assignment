# Backend-assignment
Assignment for Backend Job role

Pick one Task between TASK 1 and Task 2.
Task 3 is compulsory.

##  TASK 1 - Seating Arrangement

![Tables](/tables.png)

The complete seating arrangement is divided into 3 sections i.e S1, S2 and S3.

We have to design a seating arrangement for families. Each family comprises of exactly "4" members
in it.

### Technical Assignment

- You need to create a function which accepts 2 parameters: 1) No. of rows ("r" -> Integer) 2) Blocked
seats (For example = [ a1, a3, b2, c1, c6 ,...])
- While making the arrangement, you have to take this into consideration that all 4 members can seat in multiple rows but adjacent to each other.
- Such cases like ['a1','b1','c1','d1'], ['e1','f1','g1','h1'], ['g1','h1','i1','j1'], etc are not possible.
- Valid cases - ['a1', 'b1', 'c1', 'a2'] (2nd row), ['a1','b1','c1','b2'], ['a1','b1','c1', 'c2'] , ['d1', 'e1','f1','g1']

### Expected :

- You need to find the maximum number of families that can get accommodated in the theater.
- Write down the pseudo code/logic how you would solve this
- Provide a working solution in the language of your choice to achieve this.


## TASK 2 - Fastest Bulls

Ever seen a bull race? There are 25 bulls among which you need to find out the fastest 3 bulls.
You can conduct race among at most 5 to find out their relative speed.
At no point you can find out the actual speed of the Bull in a race. 

Find out how many races are required to get the top 3 fastest Bulls. 

### Expected :

- You need to find the minimum number of races that can be done to get the fastest 3 bulls.
- Write down the pseudo code/logic how you would solve this
- Provide a working solution in the language of your choice to achieve this.


## TASK 3 - Create a Student attendance tracker

School ABC has moved their classes online and wants to track the attendance of the learners attending the lectures online.
Create APIs in the framework of your choice which will have apis for the below:

- Track last 5 attended classes for a learner
- Track all attended classes in a given month
- Track learners below 85% attendance threshold

### Prefered Technologies

| Environment  | Framework  |
|--------------|------------|
| Backend APIs | Express Js |
| Database     | Postgres   |
| ORM/ODM      | Sequelize  |


