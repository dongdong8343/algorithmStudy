/*
1. 문자열 입력
2. 문자열 길이만큼 반복하면서 알파벳에 해당하는 배열을 카운팅한다. 
3. 배열을 순회하면서 출력한다. 
*/ 

#include <bits/stdc++.h>
using namespace std; 

int main(){
	string s;
	int a[26] = { 0 };
	cin >> s;
	for(int i = 0; i < s.size(); i++){
		a[s[i] - 'a']++;
	}
	for(int i = 0; i < 26; i++){
		cout << a[i] << " ";
	}
	return 0;
}
