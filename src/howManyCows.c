#include "bullsncows.h"

int howManyCows(int *first_arr, int *second_arr)
{
	int cows = 0;
	for(int i = 0; i < ARR_SIZE; i++)
	{
		for(int j = 0; j < ARR_SIZE; j++)
		{
			if(first_arr[i] == second_arr[j] && i != j)
			{
				cows++;
				break;
			}
		}
	}
	return cows;
}
