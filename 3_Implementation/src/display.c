/**
 * @file display.c
 * @author Srikar Gade
 * @brief to display the grid diagram based on the given state values
 * @version 0.1
 * @date 2021-11-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
///0 - invalid state
///1 - valid state

/**
 * @brief to display the corresponding grid value based on the parameters.
 * 
 * @param three number of available circles in grid 3
 * @param three_top state of the top row of grid 3
 * @param three_bottom state of the bottom row of grid 3
 * @param five number of available circles in grid 5
 * @param five_top state of the top row of grid 5
 * @param five_bottom state of the bottom row of grid 5
 * @param seven number of available circles in grid 7
 * @param seven_top state of the top row of grid 7
 * @param seven_bottom state of the bottom row of grid 7
 * @return int 0 if the state is invalid, 1 if the given parameters represent a valid state
 */
int display_circle(int three, int five, int seven)
{
    if(three > 3 || three < 0)
    {
        printf("Invalid State");
        return 0;
    }
    if(five > 5 || five < 0)
    {
        printf("Invalid State");
        return 0;
    }
    if(five > 7 || five < 0)
    {
        printf("Invalid State");
        return 0;
    }
    char *three_top = "O O";
    char *three_bottom = " O";
    char *five_top = "O O O"; 
    char *five_bottom = " O O";
    char *seven_top = "O O O O"; 
    char *seven_bottom = " O O O";
    if(three < 3)
    {
        three_bottom = " X";
    }
    if(three == 1)
    {
        three_top = "O X";
    }
    if(three == 0)
    {
        three_top = "X X";
    }
    if(five == 4)
    {
        five_bottom = " O X";
    }
    if(five <= 3)
    {
        five_bottom = " X X";
        if(five == 2)
        {
            five_top = "O O X";
        }
        if(five == 1)
        {
            five_top = "O X X";
        }
        if(five == 0)
        {
            five_top = "X X X";
        }
    }
    if(seven == 6)
    {
        seven_bottom = " O O X";
    }
    if(seven == 5)
    {
        seven_bottom = " O X X";
    }
    if(seven <= 4)
    {
        seven_bottom = " X X X";
        if(seven == 3)
        {
            seven_top = "O O O X";
        }
        if(seven == 2)
        {
            seven_top = "O O X X";
        }
        if(seven == 1)
        {
            seven_top = "O X X X";
        }
        if(seven == 0)
        {
            seven_top = "X X X X";
        }
    }
    printf("\n");
    printf("\t%s\t %s \t%s\n", three_top, five_top, seven_top);
    printf("\t%s\t %s \t%s\n\n", three_bottom, five_bottom, seven_bottom);
    return 1;
}
