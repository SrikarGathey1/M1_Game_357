# Requirements:
## Introduction:
The project aims to build a game, Oskar, which is based on logic and chance.

Oskar is a two player game with a set of three grids of undarkened circles(3 circles in the first grid, 5 circles in the second, 7 in the third).

On her turn, a player should pick one of the three grids and remove a nonzero number of circles from the chosen grid.

The player has to pick atleast one circle and cannot skip his turn.

This game continues until only one circle remains.

The player whose turn it is to play when only one circle remains is the loser. 

       

## Research:
A major part of my research included going through the source code of simple gaming projects. 
Most of the reviewed applications were built using Javascript and HTML. 
Among the reviewed games, a game called Tic-Tac-Toe was reviewed because of a grid like structure that is part of the game.
How the structure was achieved and the code behind the appearance was noted.
Our game, Oskar, uses a similar grid - like appearance. 
User interaction in the gaming projects was also observed, with user interaction being kept as low as optimally possible.
The focus of building this project would also be on making the user work as less as possible. 
                
## Cost and Features and Timeline:
For the reader's better understanding, given below is the intended appearance of the initial state of the game before either of the user makes a move:
                                 O O     //    O O O    //    O O O O
                                 
                                  O     //      O O    //      O O O
         

Our system initially takes the names of both the players playing the game. 
One of the two players is picked at random by the game.
The player chosen to begin the game is prompted to start.
The input expected from the user is two single digit numbers:
1) The grid to be chosen(Choices 3, 5 and 7)
2) The number of circles to be removed in the user's turn(range could vary from 1 to the amount of circles not removed already by the other user)
After every player's turn, the status of the circles remaining in each grid is displayed.
During the process of building the project, instead of the grid setup, simply the number of circles present in each grid would be displayed.
After the program gets executed successfully with numbers, a program which takes the status of the grid in numbers and displays the grid is designed.
Instead of removing the circles, the circles could simply be marked to make the coding easier.          

## Defining Our System:
The application shall facilitate the game whose rules have been specified above perfectly. 
The gaming application shall decrease the odds of making the game partial by picking the user at random.
The application shall be updated to include multiple variations of the original game including the number of grids available. 
However, the game at its core is a two player game with the end result of forcing the user to remove the last circle remaining

## SWOT Analysis:
Strengths of the application include planning ahead for undesired input formats, allowing for the voluntary termination of the game by either user among others.
The weaknesses would involve not being as visually appeasing as possible because of the use of C alone to build.
Threats would involve not identifying input cases that could crash the project.

## 4W's and 1'H:
#### Who:
Any person interested in playing a logical game would be intruiged by this project.
#### What:
A logical game where chance also plays a crucial part.
#### When:
This project will be completed within the given deadline.
#### Where:
This project will be platform independent.
#### How:
This project will be build mostly using C.


## Detail requirements:

### High Level Requirements:

| ID | Description                                                                              |Status|
|:--:|:----------------------------------------------------------------------------------------:|:----:|
|  1 |  The game shall have a counter to keep track of the total wins among both the users.     | Future |
|  2 |  The game shall pick one of the two players at random to begin the game.                 | Future |
|  3 |  The game shall terminate whenever either of the player chooses to terminate the game.   | Future |
|  4 |  The game shall display a rulebook whenever either of the players has a doubt to resolve | Future |


### Low Level Requirements:
        
| ID | Description                                                                                                     |Status|
|:--:|:---------------------------------------------------------------------------------------------------------------:|:----:|
|  1 | The game shall take two inputs, the number of circles and the chosen grid/cluster to remove them from.          |Future|
|  2 | The game shall terminate when either of the user types in "exit" and the other player is declared winner.       |Future|
|  3 | The game shall display the grid whenever either user makes a move.                                              |Future|
|  4 | The game ends when only one circle remains in the entire grid, the player whose turn just completed is winner.  |Future|


