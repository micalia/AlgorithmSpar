#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 정렬에 사용할 비교 함수
int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

// num_list_len은 배열 num_list의 길이입니다.
int* solution(int num_list[], size_t num_list_len) {
    // num_list를 오름차순으로 정렬
    qsort(num_list, num_list_len, sizeof(int), compare);

    // 가장 작은 5개 수를 저장할 배열 동적 할당
    int* answer = (int*)malloc(5 * sizeof(int));
    
    // 작은 5개 수 복사
    for (int i = 0; i < 5; i++) {
        answer[i] = num_list[i];
    }
    
    return answer;
}