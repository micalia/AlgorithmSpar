#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* myString) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.

    // 1. 입력 문자열의 길이를 계산한다.
    size_t len = strlen(myString);

    // 2. 결과를 저장할 새로운 문자열을 동적으로 할당한다.
    // 원본 길이 + 널 종료 문자('\0')를 위한 공간 1바이트
    char* answer = (char*)malloc(len + 1);

    // 메모리 할당에 실패했을 경우 (실제 테스트 환경에서는 필요 없을 수도 있지만, 안전을 위해)
    if (answer == NULL) {
        return NULL; // 또는 에러 처리
    }

    // 3. 입력 문자열을 순회하며 조건을 확인하고 새 문자열에 저장한다.
    for (size_t i = 0; i < len; i++) {
        // 현재 문자가 'l'보다 알파벳 순서로 앞선다면 ('a'부터 'k'까지)
        if (myString[i] < 'l') {
            answer[i] = 'l'; // 'l'로 바꾼다.
        } else {
            answer[i] = myString[i]; // 아니면 원래 문자를 그대로 사용한다.
        }
    }

    // 4. 새 문자열의 끝에 널 종료 문자를 붙인다.
    answer[len] = '\0';

    // 5. 완성된 새 문자열을 반환한다.
    return answer;
}