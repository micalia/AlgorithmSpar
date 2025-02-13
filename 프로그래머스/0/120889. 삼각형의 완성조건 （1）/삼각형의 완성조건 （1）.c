#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sides_len은 배열 sides의 길이입니다.
int solution(int sides[], size_t sides_len) {
    for (size_t i = 0; i < sides_len - 1; i++) {
        for (size_t j = i + 1; j < sides_len; j++) {
            if (sides[i] > sides[j]) {
                int temp = sides[i];
                sides[i] = sides[j];
                sides[j] = temp;
            }
        }
    }

    int longest = sides[2];
    int sum_of_others = sides[0] + sides[1];

    if (longest < sum_of_others) {
        return 1;
    } else {
        return 2;
    }
}