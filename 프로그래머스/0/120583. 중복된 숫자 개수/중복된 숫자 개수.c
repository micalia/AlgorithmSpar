#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len, int n) {
    int answer = 0;
    
    // 배열을 순회하면서 n의 개수를 센다.
    for (size_t i = 0; i < array_len; i++) {
        if (array[i] == n) {
            answer++;
        }
    }
    
    return answer;
}