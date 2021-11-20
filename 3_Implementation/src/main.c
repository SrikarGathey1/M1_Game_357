#include <stdio.h>
#include <stdlib.h>
#include "display.h"
#include "gameplay.h"

void rules();

int begin_player();

int begin_player()
{
    int r = (rand() % 2);
    int p = (rand() % 2);
    return r * p;
}



void rules()
{
    printf("Oskar is a two player game with a set of three grids of undarkened circles(3 circles in the first grid, 5 circles in the second, 7 in the third \n\nOn her turn, a player should pick one of the three grids and remove a nonzero number of circles from the chosen grid.\n\nThe player has to pick atleast one circle and cannot skip his turn.\n\nThis game continues until only one circle remains.\n\nThe player whose turn it is to play when only one circle remains is the loser.\n\n");
    printf("Type 0 for rules, 1 to exit the game at any point\n\n");
}

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
  if(begin_player() == 1)
  {
     printf("%s shall begin the game. \n\n", player1);
  }
  else
  {
      printf("%s shall begin the game. \n\n", player2);
  }
  game = gameplay(player1, player2);
  if(game == 0)
  {
      printf("%s is the winner!", player1);
  }
  else
  {
      printf("%s is the winner!", player2);
  }
  

  return 0;
}