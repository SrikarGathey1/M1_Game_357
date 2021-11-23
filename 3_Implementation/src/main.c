#include <stdio.h>
#include <stdlib.h>
#include "display.h"
#include "gameplay.h"

void rules();

int begin_player();

/**
 * @brief to generate a random number based on which the player who begins the game is decided.
 * @param[in] r to store a random number between 0 and 20.
 * @param[in] p to store a random number between 0 and 20.
 * @return int 
 */
int begin_player()
{
    int r = (rand() % 20);
    int p = (rand() % 20) - 1;
    return r * p;
}


/**
 * @brief to print the rulebook for the player's reference.
 * 
 */
void rules()
{
    printf("Oskar is a two player game with a set of three grids of undarkened circles(3 circles in the first grid, 5 circles in the second, 7 in the third \n\nOn her turn, a player should pick one of the three grids and remove a nonzero number of circles from the chosen grid.\n\nThe player has to pick atleast one circle and cannot skip his turn.\n\nThis game continues until only one circle remains.\n\nThe player whose turn it is to play when only one circle remains is the loser.\n\n");
    printf("Type 0 for rules, 1 to exit the game at any point\n\n");
}

/**
 * @brief Main function
 * To accept the names of both the players and decide who begins the game.
 * @param[in] player1 to store the name of the first player.
 * @param[in] player2 to store the name of the second player.
 * @param three to store the value of the available circles in grid 3. 
 * @param five to store the value of the available circles in grid 5.
 * @param seven to store the value of the available circles in grid 7.
 * @param game to store the result of the game played.
 * 
 * @return int 
 */
int main() 
{
  int three = 3, five = 5, seven = 7, game; 
  char player1[100];
  char player2[100];
  printf("Welcome To Oskar\n\n");
  rules();
  printf("Enter the name of Player A:");
  scanf("%s", player1);
  if(player1[0] == '1')
  {
      printf("Game terminated.");
      return 0;
  }
  while(player1[0] == '0')
  {
      rules();
      printf("Enter the name of Player A:");
      scanf("%s", player1);
  }
  printf("Enter the name of Player B:");
  scanf("%s", player2);
  if(player2[0] == '1')
  {
      printf("Game terminated.");
      return 0;
  }
  while(player2[0] == '0')
  {
      rules();
      printf("Enter the name of Player B:");
      scanf("%s", player2);
  }
  if(begin_player() % 2 == 1)
  {
     printf("%s shall begin the game. \n\n", player1);
  }
  else
  {
      printf("%s shall begin the game. \n\n", player2);
  }
  display_circle(3, 5, 7);
  game = gameplay(player1, player2);
  if(game == 1)
  {
      printf("%s is the winner", player1);
  }
  else if(game == -1)
  {
      printf("Game Terminated.");
  }
  else
  {
      printf("%s is the winner", player2);
  }
  
  return 0;
}



