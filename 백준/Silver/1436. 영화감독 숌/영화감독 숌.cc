#include <bits/stdc++.h>
using namespace std;
// 2; 38
int N;
int main() {
	//666
	cin >> N;
	// 문자열에서 666d을 찾는다.
	// find.
	int i = 666;
	//string::npos 는 찾고자하는 문자열이 존재하지 않을때
	//
	for (;;i++) // 무한루프
	{
	///666에서 계속 증가하면서 666이 있는 문자열을 찾는다.
	// 입력받은 값을 무한하게 1씩감소시키면서
	
		if(to_string(i).find("666") != string::npos)N--;
		if(N == 0) break;
	}
	cout<< i;

	return 0;
}