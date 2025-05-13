#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int solution(int arr[], size_t arr_len, int idx) {
    int answer = -1; // 찾지 못했을 경우를 대비해서 -1로 초기화!

    // idx부터 배열 끝까지 순회하면서 1을 찾습니다.
    // 예시를 보니 idx '이상'의 인덱스부터 찾는 게 맞는 것 같아!
    for (int i = idx; i < arr_len; i++) {
        // 만약 현재 인덱스의 값이 1이면
        if (arr[i] == 1) {
            // 찾았으니까 answer에 해당 인덱스를 저장하고
            answer = i;
            // 가장 작은 인덱스를 찾는 거니까, 처음 찾은 1이 바로 정답!
            // 더 볼 필요 없이 바로 반복문을 멈추고 나갑니다.
            break;
        }
    }

    // 반복문이 끝난 후에 answer 값을 반환합니다.
    // 만약 1을 찾지 못했으면 처음에 넣었던 -1이 그대로 나올 거예요.
    return answer;
}