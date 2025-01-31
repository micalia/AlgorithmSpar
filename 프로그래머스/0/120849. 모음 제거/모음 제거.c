#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string) {
    const char* vowels = "aeiouAEIOU";
    size_t length = strlen(my_string);
    char* answer = (char*)malloc(length + 1);
    if (answer == NULL) {
        return NULL;
    }

    size_t j = 0;
    for (size_t i = 0; i < length; i++) {
        if (strchr(vowels, my_string[i]) == NULL) {
            answer[j++] = my_string[i];
        }
    }
    answer[j] = '\0';
    
    return answer;
}