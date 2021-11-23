/**
 * @file gameplay.h
 * @author Srikar Gade
 * @brief Function declarations for the functions whose definitions are in gameplay.c
 * @version 0.1
 * @date 2021-11-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/**
 * @brief to facilitate game play and keep track of the available circles and the player moves
 * 
 * 
 * @return int number of moves played by both the players combined. Helps determine the winner at the end of the game. 
 */
int gameplay(char *, char *);
/**
 * @brief to take a valid grid value and prompt the user until a valid value is entered
 * 
 * @return int grid value
 */
int take_grid(int, int, int);
/**
 * @brief to take a valid number of circles to be removed from the corresponding grid
 * 
 * @return int number of circles to be removed
 */
int take_number(int, int, int, int);