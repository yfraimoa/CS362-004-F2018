#include "dominion.h"
#include <stdio.h>
#include <stdlib.h>
#include "rngs.h"
#include <assert.h>

int main (int argc, char** argv) {

  struct gameState* nG = newGame();
  
  //shows that the array returned is not = to null
  assert (nG!=0);
  
  printf ("\nThe newGame function in dominion.c is fuctioning properly. The newly made gameState is not equal to null\n");
	
} 
