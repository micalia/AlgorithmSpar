#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    int* answer = (int*)malloc((n / 2 + 1) * sizeof(int));
    int index = 0;
    for (int i = 1; i <= n; i += 2) {
        answer[index++] = i;
    }
    return answer;
}