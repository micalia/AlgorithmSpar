#include <string>
#include <vector>

using namespace std;

vector<int> g_numbers;
int g_target;
int g_answer;

void dfs(int index, int sum/*누적합*/) {
	//1. 탈출조건
	if(index == g_numbers.size()) {
		if(sum == g_target) g_answer++;
		return;
	}

	//2. 수행동작
	dfs(index + 1, sum + g_numbers[index]);
	dfs(index + 1, sum - g_numbers[index]);
}

int solution(vector<int> numbers, int target) {
    g_answer = 0;
    g_target = target;
    g_numbers = numbers;

    dfs(0, 0);

    return g_answer;
}