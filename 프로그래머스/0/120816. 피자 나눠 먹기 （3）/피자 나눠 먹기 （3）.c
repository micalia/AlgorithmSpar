#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int slice, int n) {
    int answer = 0;
     while(!(answer*slice/n>=1))
        answer++;
    return answer;
}