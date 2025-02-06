#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int* solution(int num_list[], size_t num_list_len) {
    int* answer = (int*)malloc(2 * sizeof(int));
    if (answer == NULL) {
        return NULL;
    }

    answer[0] = 0;
    answer[1] = 0;

    for (size_t i = 0; i < num_list_len; i++) {
        if (num_list[i] % 2 == 0) {
            answer[0]++;
        } else {
            answer[1]++;
        }
    }

    return answer;
}