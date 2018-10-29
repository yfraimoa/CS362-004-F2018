#include "dominion.h"
#include <stdio.h>
#include <stdlib.h>
#include "rngs.h"
#include <assert.h>

int main (int argc, char** argv) {

  struct gameState* nG = newGame();
  
  int* k = kingdomCards(adventurer, gardens, village, embargo, minion, mine, cutpurse, tribute, sea_hag, smithy);
  
  int result = initializeGame(2,k,44,nG); 
 
  if (result == 0)
    printf ("\nThe game initialized properly.\n");

  else if (result == -1){
    printf ("\nThe game failed to initialize properly.\n");
  }
	
} 
