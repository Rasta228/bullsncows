#include "bullsncows.h"

int howManyBulls(int *first_arr, int *second_arr)
{
	int bulls = 0;
	for(int i = 0; i < ARR_SIZE; i++)
	{
		if(first_arr[i] == second_arr[i])
			bulls++;
	}
	return bulls;
}

