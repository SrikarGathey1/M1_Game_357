/**
 * @file gameplay.h
 * @author Srikar Gade
 * @brief For declaring the functions required for the gameplay.c file
 * @version 0.1
 * @date 2021-11-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
/// To simulate the game play, returns the count of the total number of moves player by both players until the available number of circles is greater than 1.
int gameplay(char *, char *);
/// To prompt the user to enter a valid grid value.
int take_grid(int, int, int);
/// To prompt the user to enter a valid number of circles from the chosen grid.
int take_number(int, int, int, int);