#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int array[], size_t array_len) {
    int max_value = array[0];
    int max_index = 0;

    for (size_t i = 1; i < array_len; i++) {
        if (array[i] > max_value) {
            max_value = array[i];
            max_index = i;
        }
    }

    int* answer = (int*)malloc(2 * sizeof(int));
    if (answer == NULL) {
        return NULL;
    }

    answer[0] = max_value;
    answer[1] = max_index;

    return answer;
}
