#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int root = (int)(sqrt(n));
    return root * root == n ? 1 : 2;
}