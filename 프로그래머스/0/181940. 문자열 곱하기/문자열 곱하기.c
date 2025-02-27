#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, int k) {
    size_t len = strlen(my_string);
    
    size_t total_length = len * k;
    
    char* answer = (char*)malloc(total_length + 1); 
    
    if (answer == NULL) {
        return NULL;
    }
    
    for (int i = 0; i < k; i++) {
        strcpy(answer + (i * len), my_string);
    }
    
    answer[total_length] = '\0';    

    return answer;
}