#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* rny_string) {
    int original_length = strlen(rny_string);
    int count_m = 0;

    for (int i = 0; i < original_length; i++) {
        if (rny_string[i] == 'm') {
            count_m++;
        }
    }

    int new_length = original_length + count_m;
    char* answer = (char*)malloc(new_length + 1);

    if (answer == NULL) {
        return NULL; 
    }

    int j = 0; 
    for (int i = 0; i < original_length; i++) {
        if (rny_string[i] == 'm') {
            answer[j++] = 'r';
            answer[j++] = 'n';
        } else {
            answer[j++] = rny_string[i];
        }
    }

    answer[j] = '\0'; 
    return answer;
}