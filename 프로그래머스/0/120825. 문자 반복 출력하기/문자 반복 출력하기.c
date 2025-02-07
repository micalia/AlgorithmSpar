#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, int n) {
    int length = strlen(my_string);
    int new_length = length * n;
    char* answer = (char*)malloc(new_length + 1);
    
    if (answer == NULL) {
        return NULL;
    }
    
    int index = 0;
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < n; j++) {
            answer[index++] = my_string[i];
        }
    }
    
    answer[index] = '\0';
    
    return answer;
}