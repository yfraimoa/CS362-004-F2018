#include "dominion.h"
#include <stdio.h>
#include <stdlib.h>
#include "rngs.h"
#include <assert.h>

int main (int argc, char** argv) {

  int* k = kingdomCards(adventurer, gardens, village, embargo, minion, mine, cutpurse, tribute, sea_hag, smithy);
  
  //shows that the array returned is not = to null
  assert (k!=0);
  
  printf ("\nkingdomCards function in dominion.c is fuctioning properly. The newly made array is not equal to null\n");
	
} 
