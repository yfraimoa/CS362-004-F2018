#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"
#include <stdlib.h>


int main() {
	printf("Testing village");
	struct gameState g1, g2;
  	
	int* k = kingdomCards(adventurer, gardens, village, embargo, minion, mine, cutpurse, tribute, sea_hag, smithy);
  
  	initializeGame(2,k,44,&g1); 

	memcpy(&g2,&g1,sizeof(struct gameState));
	cardVillage(&g1, 1, 0);
	printf("Should display: %d cards, Our result is: %d cards\n", g2.handCount[g2.whoseTurn] + 1, g1.handCount[g1.whoseTurn]);
	
	return 0;
}

