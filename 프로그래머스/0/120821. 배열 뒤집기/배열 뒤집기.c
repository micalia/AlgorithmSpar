#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int num_list[], size_t num_list_len) {
    int* answer = (int*)malloc(num_list_len * sizeof(int));
    
    for (size_t i = 0; i < num_list_len; i++) {
        answer[i] = num_list[num_list_len - 1 - i];
    }
    
    return answer; 

}