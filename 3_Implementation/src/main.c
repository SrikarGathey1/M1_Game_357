/**
 * @file main.c
 * @author Srikar Gade
 * @brief Main Function
 * @version 0.1
 * @date 2021-11-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */




#include <stdio.h>
#include <stdlib.h>
#include "display.h"
#include "gameplay.h"
#include "rulebook.h"

/**
 * @brief to randomly decide the player who begins the game
 * 
 * @return int random number
 */

int begin_player();

int begin_player()
{
    int r = (rand() % 2);
    int p = (rand() % 2);
    return r * p;
}

/**
 * @brief main function
 * @param[in] three number of available circles in grid 3 
 * @param[in] five number of available circles in grid 5
 * @param[in] seven number of available circles in grid 7
 * @param[in] player1 name of the first player
 * @param[in] player2 name of the second player
 * @param[in] game to find out the winner of the game
 *  
 * @return int 
 */
int main() 
{
  int three = 3, five = 5, seven = 7, game; 
  char player1[100];
  char player2[100];
  printf("Welcome To Oskar\n\n");
  rulebook();
  printf("Enter the name of Player A:");
  scanf("%s", player1);
  if(player1[0] == '1')
  {
      printf("Game terminated.");
      return 0;
  }
  while(player1[0] == '0')
  {
      rulebook();
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
      rulebook();
      printf("Enter the name of Player B:");
      scanf("%s", player2);
  }
  if(begin_player() == 1)
  {
     printf("%s shall begin the game. \n\n", player1);
  }
  else
  {
      printf("%s shall begin the game. \n\n", player2);
  }
  display_circle(3, 5, 7);
  game = gameplay(player1, player2);
  if(game == 0)
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


