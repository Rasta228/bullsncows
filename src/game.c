#include "bullsncows.h"

void game()
{
	srand(time(NULL));
	int number;
	int bulls = 0;
	int cows = 0;
	int i = 0;
	int *arr = (int*)malloc(ARR_SIZE * sizeof(int)); // дин мас первого игр 
	int *secarr = (int*)malloc(ARR_SIZE * sizeof(int)); // вводимые 2 игрока 
	s:
	printf("Enter a number with 4 non-repeating digits\n");
	scanf("%d", &number);
	arr = numberBreaking(number);
	if(!isNonRepeating(arr) || number < 1000 || number > 9999) //проверка опервого игрока
	{
		printf("You must enter a number with 4 non-repeating digits!\n");
		goto s;
	}
	system("clear");
	while(bulls != ARR_SIZE)
	{
		bulls = 0;
		cows = 0;
		z:
		printf("Enter a number with 4 non-repeating digits\n");
		scanf("%d", &number);
		secarr = numberBreaking(number);
		if(!isNonRepeating(secarr) || number < 1000 || number > 9999) // проверка 
		{
			printf("You must enter a number with 4 non-repeating digits!\n");
			goto z;
		}
		bulls = howManyBulls(arr, secarr);
		cows = howManyCows(arr, secarr);
		printf("%d bull(s) and %d cow(s)\n", bulls, cows);
		i++; // кол ходов 
	}
	printf("Congratulations! You win in %d moves\n", i);
}
