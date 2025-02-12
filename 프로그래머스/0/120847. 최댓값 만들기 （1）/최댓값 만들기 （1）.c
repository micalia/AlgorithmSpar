#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
   if (numbers_len < 2) {
        return 0;
    }

    int max1 = numbers[0];
    int max2 = numbers[1];

    if (max1 < max2) {
        max1 = numbers[1];
        max2 = numbers[0];
    }

    for (size_t i = 2; i < numbers_len; i++) {
        if (numbers[i] > max1) {
            max2 = max1;
            max1 = numbers[i];
        } else if (numbers[i] > max2) {
            max2 = numbers[i];
        }
    }

    return max1 * max2;
}