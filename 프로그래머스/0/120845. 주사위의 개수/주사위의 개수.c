#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// box_len은 배열 box의 길이입니다.
int solution(int box[], size_t box_len, int n) {
    // 각 차원에서 주사위를 넣을 수 있는 개수를 계산
    int count_x = box[0] / n; // 가로 방향
    int count_y = box[1] / n; // 세로 방향
    int count_z = box[2] / n; // 높이 방향

    // 총 주사위 개수는 각 방향에서의 개수를 곱한 값
    int answer = count_x * count_y * count_z;
    return answer;
}
