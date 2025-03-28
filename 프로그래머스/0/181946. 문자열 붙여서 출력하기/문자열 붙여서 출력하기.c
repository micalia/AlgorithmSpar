#include <stdio.h>
#define LEN_INPUT1 11
#define LEN_INPUT2 11

int main(void) {
    char s1[LEN_INPUT1];
    char s2[LEN_INPUT2];
    
    // 문자열 입력
    scanf("%s %s", s1, s2);
    
    // 문자열 이어서 출력
    printf("%s%s\n", s1, s2);

    return 0;
}
