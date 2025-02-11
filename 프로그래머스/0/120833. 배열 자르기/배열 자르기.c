#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int* solution(int numbers[], size_t numbers_len, int num1, int num2) {
    if (num1 < 0 || num2 >= numbers_len || num1 > num2) {
        return NULL;
    }

    size_t length = num2 - num1 + 1;
    int* answer = (int*)malloc(length * sizeof(int));
    if (answer == NULL) {
        return NULL;
    }

    for (size_t i = 0; i < length; i++) {
        answer[i] = numbers[num1 + i];
    }
    return answer;
}