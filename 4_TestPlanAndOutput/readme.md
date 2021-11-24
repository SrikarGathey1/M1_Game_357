# Test Plan:

## High Level Test Plan:

|Test ID|                            Description                           |  Exp I/P   |  Exp O/P  |  Actual Output |  Type Of Test   |
|:-----:|:----------------------------------------------------------------:|:----------:|:---------:|:--------------:|:---------------:|
| H_01  | Prints the rulebook whenever the user presses 0.                 |     0      |Rules are printed(rulebook() function)      |Rules are printed as expected              |Requirement based|
| H_02  | Output states for all the different outputs defined              |Any game state| Equivalent grid representation|Expected grid representation|Scenario Based|
| H_03  |  Invalid grid values are pointed out during the execution of the grid display function.  | (-1, -1, -1) |Invalid Grid Value |Invalid Grid Value |Boundary Based|
        


## Low level test plan:

|Test ID|                            Description                           |  Exp I/P   |  Exp O/P  |  Actual Output |  Type Of Test   |
|:-----:|:----------------------------------------------------------------:|:----------:|:---------:|:--------------:|:---------------:|
| L_01  |Each valid grid state has a corresponding grid diagram. | (0 - 3, 0 - 5, 0 - 7)|Corresponding grid diagram |Corresponding grid diagram |Requirement based|
| L_02  |Will prompt the user to enter valid values for grid and number of circles to be removed at every point of the game. |An invalid valid grid value | Will prompt the user to enter the grid value again | Will prompt the user to enter the grid value again |Scenario Based   |
| L_03  |Game play stops when the available number of unmarked circles is equal to 1.  |     1       | Based on count the winner is decided |Based on count variable value the winner is declared.  |Boundary Based   |

