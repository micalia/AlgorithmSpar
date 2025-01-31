#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    
     for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            int a = i;
            int b = n / i;

            if (a == b) {
                answer += 1;
            } else {
                answer += 2;
            }
        }
    }
    
    return answer;
}