#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// strArr_len은 배열 strArr의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* strArr[], size_t strArr_len) {
    // 동적 할당을 통해 결과 배열을 생성합니다.
    char** answer = (char**)malloc(strArr_len * sizeof(char*));
    if (answer == NULL) {
        return NULL; // 메모리 할당 실패 시 NULL 반환
    }

    for (size_t i = 0; i < strArr_len; i++) {
        // 각 문자열의 길이를 구합니다.
        size_t len = strlen(strArr[i]);
        // 새로운 문자열을 위한 메모리를 할당합니다.
        answer[i] = (char*)malloc((len + 1) * sizeof(char));
        if (answer[i] == NULL) {
            // 메모리 할당 실패 시 이전에 할당한 메모리를 해제하고 NULL 반환
            for (size_t j = 0; j < i; j++) {
                free(answer[j]);
            }
            free(answer);
            return NULL;
        }

        // 홀수번째 인덱스는 대문자로, 짝수번째 인덱스는 소문자로 변환합니다.
        for (size_t j = 0; j < len; j++) {
            if (i % 2 == 0) {
                // 짝수 인덱스: 소문자 변환
                answer[i][j] = tolower(strArr[i][j]);
            } else {
                // 홀수 인덱스: 대문자 변환
                answer[i][j] = toupper(strArr[i][j]);
            }
        }
        // 문자열의 끝을 나타내는 널 문자 추가
        answer[i][len] = '\0';
    }

    
    
    return answer;
}