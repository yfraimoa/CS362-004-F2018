#include <string.h>
#include "dominion.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "rngs.h"
#include <assert.h>

int main (int argc, char** argv) {

	printf("Testing great hall");
	struct gameState g1, g2;
	time_t t;
	srand((unsigned) time(&t));
  	
	int* k = kingdomCards(adventurer, gardens, village, embargo, minion, mine, cutpurse, tribute, sea_hag, smithy);
  
	for (int i = 0; i < 1000; i++){
  		initializeGame(2,k,rand()%5000,&g1); 
		memcpy(&g2,&g1,sizeof(struct gameState));
		cardGreatHall(&g1, rand()%5, 0);
	}
	//printf("Should display: %d cards, Our result is: %d cards\n", g2.handCount[g2.whoseTurn] + 1, g1.handCount[g1.whoseTurn]);
	
	return 0;
	
} 


