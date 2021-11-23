#include <stdio.h>
#include "gameplay.h"

/// if 0 is returned the prompt ask for the grid value again.
/// if -1 is returned terminate the game.
/// only valid inputs are 3, 5 and 7.
/// if the chosen grid has no available circles, that particular grid is no longer a valid input.

/**
 * @brief for taking a valid grid value and prompting the user to give a valid grid value.
 * 
 * @param three to store the value of the available circles in grid 3.
 * @param five to store the value of the available circles in grid 5.
 * @param seven to store the value of the available circles in grid 7.
 * @param grid to store the value of grid given by the user.
 * @param g to get the number of inputs scanned.
 * @return int 
 */

int take_grid(int three, int five, int seven)
{
    int grid, g;
    printf("Enter a valid grid value:");
    g = scanf("%d", &grid);
    if(grid == 3)
    {
        if(three == 0)
        {
            printf("This grid is empty. Choose another grid;\n");
            take_grid(three, five, seven);
        }
        else
        {
            return 3;
        }
    }
    else if(grid == 5)
    {
        if(five == 0)
        {
            printf("This grid is empty. Choose another grid;\n");
            take_grid(three, five, seven);
        }
        else
        {
            return 5;
        }
    }
    else if(grid == 7)
    {
        if(seven == 0)
        {
            printf("This grid is empty. Choose another grid;\n");
            return take_grid(three, five, seven);
        }
        else
        {
            return 7;
        }
    }
    else if(grid == 0)
    {
        rules();
        return take_grid(three, five, seven);
    }
    else if(grid == 1)
    {
        return -1;
    }
    else if(g == 0)
    {
        take_grid(three, five, seven);
    }
    else
    {
        printf("Not a valid grid value, choose among 3, 5 and 7.\n");
        return take_grid(three, five, seven);
    }
}

/**
 * @brief to prompt the user until she enters a valid value
 * 
 * @param three to store the value of the available circles in grid 3. 
 * @param five to store the value of the available circles in grid 5.
 * @param seven to store the value of the available circles in grid 7.
 * @param grid to store the value of grid given by the user.
 * @param available to store the available number of circles in the entire grid
 * @param number to store the number of circles to be removed from the chosen grid
 * @return int 
 */

int take_number(int three, int five, int seven, int grid)
{
    if(grid == 1)
    {
        return -1;
    }
    int number;
    int available = three + five + seven;
    printf("Enter the number of circles to be removed:");
    scanf("%d", &number);
    if(grid == 3)
    {
        if(number > three)
        {
            printf("Entered number exceeds available numbers\n");
            take_number(three, five, seven, grid);
        }
        else
        {
            return number;
        }
    }
    if(grid == 5)
    {
        if(number > five)
        {
            printf("Entered number exceeds available numbers\n");
            take_number(three, five, seven, grid);
        }
        else
        {
            return number;
        }
    }
    if(grid == 7)
    {
        if(number > seven)
        {
            printf("Entered number exceeds available numbers\n");
            take_number(three, five, seven, grid);
        }
        else
        {
            return number;
        }
    }
    if(number == 0)
    {
        rules();
        take_number(three, five, seven, grid);
    }
    if(number == -1)
    {
        return -1;
    }
    
}

/**
 * @brief to facilitate the gameplay
 * 
 * @param[out] player1 to store the name of the first player.
 * @param[out] player2 to store the name of the second player.
 * @param[in] three to store the value of the available circles in grid 3. 
 * @param[in] five to store the value of the available circles in grid 5.
 * @param[in] seven to store the value of the available circles in grid 7.
 * @param[in] grid to store the value of grid given by the user.
 * @param[in] available to store the available number of circles in the entire grid.
 * @param[in] number to store the number of circles to be removed from the chosen grid.
 * @param[in] count to keep track of both the players' moves.
 *  
 * @return int 
 */

int gameplay(char *player1, char *player2)
{
    int three = 3, five = 5, seven = 7;
    int available = 15;
    int count = 0;
    int number, flag = 0;
    int grid;
    /**
     * @brief This loop is written to continue the game as long as the available number of circles is greater than 1.
     * 
     */
    while(available > 1)
    {
        count++;
        if(count % 2 == 0)
        {
            printf("Player %s it is your turn.\n", player1);
        }
        else
        {
            printf("Player %s it is your turn.\n", player2);          
        }
        grid = take_grid(three, five, seven);
        if(grid == -1)
        {
            return -1;
        }
        number = take_number(three, five, seven, grid);
        if(number == -1)
        {
            return -1;
        }

        if(grid == 3)
        {
            if(number <= three)
            {
                three = three - number;
                available = available - number;

            }  
        }
        if(grid == 5)
        {
            if(number <= five)
            {
                five = five - number;
                available = available - number;
            }
        }
        if(grid == 7)
        {
            if(number <= seven)
            {
                seven = seven - number;
                available = available - number;
            }
        }
        display_circle(three, five, seven);
    }
    return count;
}