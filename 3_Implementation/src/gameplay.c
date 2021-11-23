#include <stdio.h>

// 0 if the grid is invalid 1 if valid 2 if terminate
// if 0 is returned the prompt asking for grid has to be repeated again
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
            return take_grid(three, five, seven);
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
            return take_grid(three, five, seven);
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
        rulebook();
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
            return take_number(three, five, seven, grid);
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
            return take_number(three, five, seven, grid);
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
            return take_number(three, five, seven, grid);
        }
        else
        {
            return number;
        }
    }
    if(number == 0)
    {
        rulebook();
        return take_number(three, five, seven, grid);
    }
    if(number == -1)
    {
        return -1;
    }
    
}

int gameplay(char *player1, char *player2)
{
    int three = 3, five = 5, seven = 7;
    int available = 15;
    int count = 0;
    int number, flag = 0;
    int grid;
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