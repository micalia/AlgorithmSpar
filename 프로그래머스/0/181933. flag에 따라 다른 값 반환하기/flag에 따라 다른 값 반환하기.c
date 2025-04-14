#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b, bool flag) {
    if (flag) {
        return a + b; // flag가 true인 경우
    } else {
        return a - b; // flag가 false인 경우
    }
}