#define CTEST_MAIN

#include <ctest.h>
#include "bullsncows.h"

CTEST(number_check, correct_number_check)
{
    int arr[4] = {1, 2, 3, 4};
    bool result = isNonRepeating(arr);
    ASSERT_TRUE(result);
}

CTEST(number_check, incorrect_number_check)
{
    int arr[4] = {1, 2, 3, 3};
    bool result = isNonRepeating(arr);
    ASSERT_FALSE(result);
}

CTEST(bulls_check, correct_bulls_check)
{
    int arr[4] = {1, 2, 3, 4};
    int secarr[4] = {1, 3, 2, 4};
    int result = howManyBulls(arr, secarr);
    int expected = 2;
    ASSERT_EQUAL(result, expected);
}

CTEST(cows_check, correct_cows_check)
{
    int arr[4] = {1, 2, 3, 4};
    int secarr[4] = {1, 6, 2, 4};
    int result = howManyCows(arr, secarr);
    int expected = 1;
    ASSERT_EQUAL(result, expected);
}

int main(int argc, const char** argv)
{
    return ctest_main(argc, argv);
}
