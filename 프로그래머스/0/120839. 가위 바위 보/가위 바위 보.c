#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* rsp) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    
    size_t length = strlen(rsp);
    
    char* answer = (char*)malloc(length + 1); // +1은 null terminator를 위한 공간입니다.
    
    for (size_t i = 0; i < length; i++) {
        if (rsp[i] == '2') {
            answer[i] = '0'; // 가위(2)를 이기려면 바위(0)
        } else if (rsp[i] == '0') {
            answer[i] = '5'; // 바위(0)를 이기려면 보(5)
        } else if (rsp[i] == '5') {
            answer[i] = '2'; // 보(5)를 이기려면 가위(2)
        }
    }
    
    answer[length] = '\0';
    return answer;
}