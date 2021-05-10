/* Casino Game
* Jack  - J
* Queen - Q
* King  - K
* The Computer will shuffle the cards and
* the player will have to guess the position of 'Q'
* If he wins, he takes 3 time bet
* if he looses, he looses the bet amount.
* player has virtual cash $100 initially
*/
// WARNING: THIS IS ONLY FOR TESTING PURPOSES TO PROVE
// MEMORY LEAK WILL OCCUR IF MEMORY IS ALLOCATED IMPROPERLY

#include "stdio.h"
#include "stdlib.h"
#include "stdarg.h"
#include "ctype.h"
#include "math.h"
#include "time.h"

int cash = 100;

void PlayGame(int bet){
	char *card = (char*)malloc(3*sizeof(char));
	card[0] = 'J';
	card[1] = 'Q';
	card[2] = 'K';
	printf("Shuffling ...\n");
	srand(time(NULL)); // we passing a seed to random number generator
	int i;
	for (int i = 0; i < 5; i++ ){
		int x = rand() % 3;
		int y = rand() % 3;
		int temp = card[x];
		card[x] = card[y];
		card[y] = temp;	// swaps characters at position x and y
	}
	int playersGuess;
	printf("What's the position of queen - 1,2 or 3?\n");
	scanf("%d", &playersGuess);
	if (card[playersGuess - 1 ] == 'Q'){
		cash += 3*bet;
		printf(":-D You Win!!! Result = %c%c%c Total Cash = %d\n", card[0],card[1],card[2], cash);
	} else {
		cash -= bet;
		printf(":-( You Loose!!! Result = %c%c%c Total Cash = %d\n", card[0],card[1],card[2], cash);

	}
}

int main(void){
	int bet;
	printf("Welcome to the Virtual Casino Game\n\n");
	printf("Total Cash = $%d\n",cash);
	while (cash > 0){
		printf("What's you bet? $");
		scanf("%d", &bet);
		if (bet == 0 || bet > cash) break;
		PlayGame(bet);
		printf("\n*******************************************\n");
	}
	return 0;
}


