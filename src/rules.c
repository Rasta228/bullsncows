#include "bullsncows.h"

void rules()
{
	int turn = 0;
	system("clear");
	printf("One player types a 4-digit secret number. The digits must be all different. The second one have to guess this number.\n");
	printf("If the matching digits are in their right positions, they are bulls, if in different positions, they are cows.\nExample:\n");
	printf("Secret number: 4271\nOpponent's try: 1234\nAnswer: 1 bull and 2 cows. (The bull is 2, the cows are 4 and 1.)\n 1. Back\n");
	while(turn != 1)
		scanf("%d", &turn);
}
