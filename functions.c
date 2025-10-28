#include <stdio.h>
#include "functions.h"

int findMin(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

char mostFrequentChar(char arr[], int n) {
    int freq[256] = { 0 };
    for (int i = 0; i < n; ++i)
        freq[(unsigned char)arr[i]]++;

    int maxCount = 0;
    char most = arr[0];
    for (int i = 0; i < n; ++i) {
        if (freq[(unsigned char)arr[i]] > maxCount) {
            maxCount = freq[(unsigned char)arr[i]];
            most = arr[i];
        }
    }
    return most;
}
