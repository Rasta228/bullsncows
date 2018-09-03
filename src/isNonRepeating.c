#include "bullsncows.h"

bool isNonRepeating(int *arr)
{
	for(int i = 0; i < ARR_SIZE; i++)
		for(int j = 0; j < ARR_SIZE; j++)
		{
			if(arr[i] == arr[j] && i != j)
			{
				return false;
			}
		}
	return true;
}

