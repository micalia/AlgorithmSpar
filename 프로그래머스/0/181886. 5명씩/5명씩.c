#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// names_len은 배열 names의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* names[], size_t names_len) {
     // 그룹의 개수를 계산합니다.
    size_t group_count = (names_len + 4) / 5; // 5명씩 묶기 때문에 4를 더한 후 나누기 5
    // 결과를 저장할 메모리를 할당합니다.
    char** answer = (char**)malloc(group_count * sizeof(char*));
    
    for (size_t i = 0; i < group_count; i++) {
        // 각 그룹의 첫 번째 사람의 이름을 저장합니다.
        answer[i] = strdup(names[i * 5]); // strdup를 사용하여 문자열을 복사합니다.
    }
    return answer;
}