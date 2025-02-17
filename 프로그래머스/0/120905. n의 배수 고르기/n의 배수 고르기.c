#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numlist_len은 배열 numlist의 길이입니다.
int* solution(int n, int numlist[], size_t numlist_len) {
    size_t count = 0;

    for (size_t i = 0; i < numlist_len; i++) {
        if (numlist[i] % n == 0) {
            count++;
        }
    }

    int* answer = (int*)malloc(count * sizeof(int));
    if (answer == NULL) {
        return NULL;
    }

    size_t index = 0;
    for (size_t i = 0; i < numlist_len; i++) {
        if (numlist[i] % n == 0) {
            answer[index++] = numlist[i];
        }
    }
    return answer;
}