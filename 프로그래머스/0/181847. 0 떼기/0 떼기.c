#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* n_str) {
    int len = strlen(n_str);
    
    int start_index = 0;
    while (start_index < len && n_str[start_index] == '0') {
        start_index++;
    }
    
    if (start_index == len) {
        char* answer = (char*)malloc(1);
        answer[0] = '\0'; // 빈 문자열
        return answer;
    }
    
    int new_length = len - start_index;
    
    char* answer = (char*)malloc(new_length + 1); // +1은 null terminator를 위한 공간
    if (answer == NULL) {
        return NULL; // 메모리 할당 실패 시 NULL 반환
    }
    
    strcpy(answer, n_str + start_index);
    
    return answer; 
}