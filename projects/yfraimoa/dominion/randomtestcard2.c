#include "dominion.h"
#include <string.h>
#include <time.h>
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"
#include <stdlib.h>


int main() {
	printf("Testing smithy");
	struct gameState g1, g2;
	time_t t;
	srand((unsigned) time(&t));
  	
	int* k = kingdomCards(adventurer, gardens, village, embargo, minion, mine, cutpurse, tribute, sea_hag, smithy);
	int i = 0;
	
	for (i = 0; i < 1000; i++){  
  		initializeGame(2,k,rand()%5000,&g1); 
		memcpy(&g2,&g1,sizeof(struct gameState));
		cardSmithy(&g1, 1, 1);
	}
	
	//printf("Should display: %d cards, Our result is: %d cards\n", g2.handCount[g2.whoseTurn] + 3, g1.handCount[g1.whoseTurn]);
	
	return 0;
}

