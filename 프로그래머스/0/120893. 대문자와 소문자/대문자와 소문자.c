#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string) {
     // 문자열의 길이를 구합니다.
    size_t length = strlen(my_string);
    
    // 변환된 문자열을 저장할 메모리를 동적 할당합니다.
    char* answer = (char*)malloc(length + 1); // +1은 null terminator를 위한 공간입니다.
    if (answer == NULL) {
        return NULL; // 메모리 할당 실패 시 NULL 반환
    }

    // 문자열을 변환합니다.
    for (size_t i = 0; i < length; i++) {
        if (my_string[i] >= 'A' && my_string[i] <= 'Z') {
            // 대문자는 소문자로 변환
            answer[i] = my_string[i] + ('a' - 'A');
        } else if (my_string[i] >= 'a' && my_string[i] <= 'z') {
            // 소문자는 대문자로 변환
            answer[i] = my_string[i] - ('a' - 'A');
        } else {
            // 알파벳이 아닌 문자는 그대로 유지
            answer[i] = my_string[i];
        }
    }

    // 변환된 문자열의 끝에 null terminator를 추가합니다.
    answer[length] = '\0';
    return answer;
}