#include "bullsncows.h"

void game()
{
	srand(time(NULL));
	int number, bulls, cows;
    int n;
	int i = 0;
	int *arr = (int*)malloc(ARR_SIZE * sizeof(int));
	int *secarr = (int*)malloc(ARR_SIZE * sizeof(int));
	s:
	printf("Enter a number with 4 non-repeating digits\n");
    do {
        n = scanf("%d", &number);
        while (getchar() != '\n');
        if (n == 1)
        {
            arr = numberBreaking(number);
	        if(!isNonRepeating(arr) || number < 1000 || number > 9999)
	        {
		        printf("You must enter a number with 4 non-repeating digits!\n");
		        goto s;
	        }
        }
        else printf("%s", "Don't enter letters!!\n"); }
    while (n != 1);
	arr = numberBreaking(number);
	if(!isNonRepeating(arr) || number < 1000 || number > 9999)
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
		do {
        n = scanf("%d", &number);
        while (getchar() != '\n');
        if (n == 1)
        {
            secarr = numberBreaking(number);
	        if(!isNonRepeating(arr) || number < 1000 || number > 9999)
	        {
		        printf("You must enter a number with 4 non-repeating digits!\n");
		        goto z;
	        }
        }
        else printf("%s", "Don't enter letters!!\n"); }
        while (n != 1);
		bulls = howManyBulls(arr, secarr);
		cows = howManyCows(arr, secarr);
		printf("%d bull(s) and %d cow(s)\n", bulls, cows);
		i++;
	}
	printf("Congratulations! You win in %d moves\n", i);
}
