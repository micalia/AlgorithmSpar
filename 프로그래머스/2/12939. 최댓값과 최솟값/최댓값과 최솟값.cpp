#include <string>
#include <vector>
#include <algorithm>
//3 : 10
using namespace std;

vector<string> split(const string& input, string delimiter) { 
    vector<string> result;
    auto start = 0;
    auto end = input.find(delimiter); 
    while (end != string::npos) {
    result.push_back(input.substr(start, end - start)); 
    start = end + delimiter.size();
    end = input.find(delimiter, start); 
    }
    result.push_back(input.substr(start)); 
    return result;
}

string solution(string s) {
    string answer = "";
// 문자열을 분리한다. 공백을 기준으로
auto arr = split(s, " ");

vector<int> intArr;
// 문자열을 숫자로 변환한다.
for (int i = 0; i < arr.size(); i++)
{
	int intVal = stoi(arr[i]);
	intArr.push_back(intVal);
}

sort(intArr.begin(), intArr.end());

return to_string(intArr.front()) + " " + to_string(intArr.back());
}