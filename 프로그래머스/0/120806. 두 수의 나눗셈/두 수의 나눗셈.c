#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
    int answer = 0;
    float temp = (float)num1 / num2;
    float temp2 = temp * 1000;
    return (int)temp2;
}