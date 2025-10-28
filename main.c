#include <stdio.h>
#include "functions.h"

//#define NUMERIC
 #define CHAR

int main(void) {
#if defined(NUMERIC)
    int data[SIZE] = { 5, -3, 7, 0, 12, -1, 4, 2, 9, -5 };
    printf("A numeric array is selected\n");

    int minValue = findMin(data, SIZE);
    printf("Minimum array element = %d\n", minValue);

#elif defined(CHAR)
    char data[SIZE] = { 'a', 'b', 'a', 'c', 'b', 'a', 'd', 'b', 'b', 'a' };
    printf("Character array selected\n");

    char most = mostFrequentChar(data, SIZE);
    printf("The most common symbol: '%c'\n", most);

#else
    printf("Array type not selected! Specify NUMERIC or CHAR in your code\n");
#endif

    return 0;
}
