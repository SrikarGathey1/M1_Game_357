#include <stdio.h>
char* rulebook()
{
    printf("Oskar is a two player game with a set of three grids of undarkened circles(3 circles in the first grid, 5 circles in the second, 7 in the third \n\nOn her turn, a player should pick one of the three grids and remove a nonzero number of circles from the chosen grid.\n\nThe player has to pick atleast one circle and cannot skip his turn.\n\nThis game continues until only one circle remains.\n\nThe player whose turn it is to play when only one circle remains is the loser.\n\n");
    printf("Type 0 for rules, 1 to exit the game at any point\n\n");
    return "Rules have been printed.";
}