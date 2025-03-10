#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int k) {
    int answer = 0;
    int a=k-n/10; // 시킨 음료수 - 음료수 서비스 개수
    
    if(a<=0) k=0; // 시킨 음료수<=음료수 서비스 개수 -> 음료수 값 지불 X
    else k=a; // 음료수 서비스 개수를 제외한 나머지 음료수 개수
    
    answer=n*12000+k*2000;
    
    return answer;
}