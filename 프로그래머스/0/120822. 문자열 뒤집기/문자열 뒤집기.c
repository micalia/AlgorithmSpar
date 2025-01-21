#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string) {
    // 문자열의 길이를 계산합니다.
    size_t length = strlen(my_string);
    
    // 거꾸로 뒤집은 문자열을 저장할 메모리를 동적 할당합니다.
    char* answer = (char*)malloc(length + 1); // +1은 null terminator를 위한 공간입니다.
    
    if (answer == NULL) {
        return NULL; // 메모리 할당 실패 시 NULL 반환
    }
    
    // 문자열을 거꾸로 복사합니다.
    for (size_t i = 0; i < length; i++) {
        answer[i] = my_string[length - 1 - i];
    }
    
    // null terminator를 추가합니다.
    answer[length] = '\0';
    return answer;
}