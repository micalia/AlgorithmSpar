#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, int num1, int num2) {
    // 문자열의 길이를 구합니다.
    int length = strlen(my_string);
    
    // 동적 할당을 통해 새로운 문자열을 만듭니다.
    char* answer = (char*)malloc(length + 1); // +1은 null terminator를 위한 공간입니다.
    
    // 원본 문자열을 복사합니다.
    strcpy(answer, my_string);
    
    // num1과 num2의 문자를 바꿉니다.
    char temp = answer[num1];
    answer[num1] = answer[num2];
    answer[num2] = temp;
    
    return answer;
}