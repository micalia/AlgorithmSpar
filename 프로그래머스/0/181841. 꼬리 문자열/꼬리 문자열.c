#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// str_list_len은 배열 str_list의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* str_list[], size_t str_list_len, const char* ex) {
     // 결과를 저장할 문자열의 총 길이를 계산합니다.
    size_t total_len = 0;
    for (size_t i = 0; i < str_list_len; i++) {
        // strstr 함수를 사용하여 str_list[i] 안에 ex가 포함되어 있는지 확인합니다.
        // strstr이 NULL을 반환하면 ex가 포함되어 있지 않다는 뜻입니다.
        if (strstr(str_list[i], ex) == NULL) {
            // ex를 포함하지 않는 문자열의 길이를 총 길이에 더합니다.
            total_len += strlen(str_list[i]);
        }
    }

    // 계산된 총 길이 + 널 종료 문자('\0')를 위한 공간 1바이트만큼 메모리를 동적 할당합니다.
    char* answer = (char*)malloc(total_len + 1);

    // 메모리 할당에 실패했을 경우 (실제 테스트 환경에서는 필요 없을 수도 있지만, 안전을 위해)
    if (answer == NULL) {
        // 에러 처리 또는 NULL 반환
        return NULL;
    }

    // 결과를 저장할 문자열을 빈 문자열로 초기화합니다.
    // answer[0] = '\0'; // 이렇게 하면 뒤에서 strcpy를 사용할 때 시작 위치가 명확해집니다.
    // 또는 아래에서 strcpy를 이용해 첫 문자열을 복사하고 그 이후부터는 += strlen을 활용하는 방식이 더 효율적입니다.
    // 빈 문자열로 초기화하는 대신, 복사할 위치를 추적하는 포인터나 인덱스를 사용하는 것이 일반적입니다.

    size_t current_copied_len = 0; // 현재까지 answer에 복사된 총 길이

    // str_list를 다시 순회하며 조건을 만족하는 문자열을 answer에 복사합니다.
    for (size_t i = 0; i < str_list_len; i++) {
        // strstr 함수를 사용하여 str_list[i] 안에 ex가 포함되어 있는지 확인합니다.
        if (strstr(str_list[i], ex) == NULL) {
            // ex를 포함하지 않는 문자열이라면 answer의 현재 위치에 복사합니다.
            strcpy(answer + current_copied_len, str_list[i]);

            // 복사한 문자열 길이만큼 현재 위치를 이동합니다.
            current_copied_len += strlen(str_list[i]);
        }
    }

    // 마지막에 널 종료 문자를 붙여 문자열을 완성합니다.
    // total_len에 이미 모든 합쳐질 문자열의 길이가 계산되어 있으므로,
    // 그 위치에 '\0'를 넣어주면 됩니다.
    answer[total_len] = '\0';

    // 완성된 꼬리 문자열을 반환합니다.
    return answer;
}