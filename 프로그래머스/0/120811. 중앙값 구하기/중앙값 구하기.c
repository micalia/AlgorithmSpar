#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int solution(int array[], size_t array_len) {
    qsort(array, array_len, sizeof(int), compare);
    
    int middle_index = array_len / 2;
    int answer = array[middle_index];
    
    return answer;
}
