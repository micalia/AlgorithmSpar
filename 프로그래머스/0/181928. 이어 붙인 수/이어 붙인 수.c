#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    long long odd_sum = 0;
    long long even_sum = 0;
    long long odd_number = 0;
    long long even_number = 0;
    int odd_count = 0;
    int even_count = 0;

    for (size_t i = 0; i < num_list_len; i++) {
        if (num_list[i] % 2 == 0) {
            even_number = even_number * 10 + num_list[i];
            even_count++;
        } else {
            odd_number = odd_number * 10 + num_list[i];
            odd_count++;
        }
    }

    return odd_number + even_number;
}