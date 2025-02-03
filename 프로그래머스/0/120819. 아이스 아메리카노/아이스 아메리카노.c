#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int money) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int price = 5500;
    int count = money / price;
    int remaining = money % price;
    
    int* answer = (int*)malloc(2 * sizeof(int));
    answer[0] = count;
    answer[1] = remaining;
    
    
    return answer;
}