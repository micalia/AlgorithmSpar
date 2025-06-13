#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n, int k) {
  // k의 배수가 n까지 몇 개 있는지 계산해 보자!
    int count = n / k;

    // 계산한 개수만큼 int형 메모리를 할당해 줘!
    // int 하나의 크기 * 개수 만큼 필요하겠지?
    int* answer = (int*)malloc(count * sizeof(int));

    // 만약 메모리 할당에 실패하면 NULL이 반환될 수 있어.
    // (이 문제에서는 제한사항 때문에 거의 실패 안 하겠지만, 알아두면 좋아!)
    if (answer == NULL) {
        // 실패했으면 어떡하지? 일단 NULL을 반환하자.
        return NULL;
    }

    // 이제 배열에 k의 배수들을 채워 넣자!
    // 첫 번째 배수는 k*1, 두 번째는 k*2, ... count 번째는 k*count 야.
    for (int i = 0; i < count; i++) {
        answer[i] = (i + 1) * k; // i는 0부터 시작하니까 (i+1)을 곱해줘야 해!
    }
    return answer;
}