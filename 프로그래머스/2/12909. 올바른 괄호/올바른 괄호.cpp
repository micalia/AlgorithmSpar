#include<bits/stdc++.h> 
#include <string>
#include <stack>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = true;

   stack<char> stk;
for (int i =0; i < s.length(); i++)
{
	if (s[i] == '(') {
		stk.push(s[i]);
	}
	else { // 닫는 괄호면 팝
		if (stk.size() != 0 && stk.top() == '(') {
			stk.pop();
		}
		else {
			stk.push(s[i]);
		}
	}
}
if (stk.empty()) {
	answer = true;
}
else {
	answer = false;

}

    return answer;
}