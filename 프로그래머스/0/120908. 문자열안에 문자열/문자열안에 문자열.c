#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* str1, const char* str2) {
    int answer = 0;
     // str2가 str1에 포함되어 있는지 확인
    if (strstr(str1, str2) != NULL) {
        return 1; // str2가 str1에 포함되어 있음
    } else {
        return 2; // str2가 str1에 포함되어 있지 않음
    }
    return answer;
}