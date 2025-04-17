#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* myString) {
    int len = 0;
    while (myString[len] != '\0') {
        len++;
    }

    char* answer = (char*)malloc(len + 1);
    if (answer == NULL) return NULL; 

    for (int i = 0; i < len; i++) {
        answer[i] = tolower(myString[i]);
    }
    answer[len] = '\0'; 

    return answer;
}