#ifndef BULLSNCOWS_H
#define BULLSNCOWS_H
#define ARR_SIZE 4

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void rules();
bool isNonRepeating(int *arr);
int * numberBreaking(int n);
void printMas(int *arr);
int howManyCows(int *first_arr, int *second_arr);
int howManyBulls(int *first_arr, int *second_arr);
void game();

#endif
