#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len, int n) {
    for (size_t i = 0; i < num_list_len; i++) {
        if (num_list[i] == n) {
            return 1; // n이 num_list에 존재하는 경우
        }
    }
    return 0; // n이 num_list에 존재하지 않는 경우
}