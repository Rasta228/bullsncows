#include "bullsncows.h"

int * numberBreaking(int n)
{
    int *arr = (int*)malloc(ARR_SIZE * sizeof(int));
	for(int i = ARR_SIZE - 1; i >= 0; i--)
	{
		arr[i] = n % 10;
		n /= 10;
	}
	return arr;
}
