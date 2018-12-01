#include "dominion.h"
#include <stdio.h>
#include <stdlib.h>
#include "rngs.h"
#include <assert.h>

int main (int argc, char** argv) {

  struct gameState* nG = newGame();
  
  int* k = kingdomCards(adventurer, gardens, village, embargo, minion, mine, cutpurse, tribute, sea_hag, smithy);
  
  initializeGame(2,k,44,nG); 

  int result = shuffle (1,nG);  
 
  if (result == 0)
    printf ("\nPlayer's cards were successfully shuffled.\n");

  else if (result == -1){
    printf ("\nThe player's cards could not be shuffled.\n");
  }
	
} 
