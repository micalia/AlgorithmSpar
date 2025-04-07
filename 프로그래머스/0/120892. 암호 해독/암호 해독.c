#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* cipher, int code) {
    // 문자열의 길이를 구합니다.
    int length = strlen(cipher);
    
    // 최대 필요한 길이를 계산합니다.
    // code의 배수로 선택된 문자의 개수를 세기 위해
    // length / code를 사용하여 필요한 메모리를 할당합니다.
    int max_length = length / code;
    
    // 결과 문자열을 동적 할당합니다.
    // +1은 null terminator를 위한 공간입니다.
    char* answer = (char*)malloc(max_length + 1);
    
    // answer의 인덱스
    int index = 0;
    
    // code의 배수 번째 문자를 추출합니다.
    for (int i = code - 1; i < length; i += code) {
        answer[index++] = cipher[i];
    }
    
    // null terminator를 추가합니다.
    answer[index] = '\0';
    return answer;
}