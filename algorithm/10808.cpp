/*
1. ���ڿ� �Է�
2. ���ڿ� ���̸�ŭ �ݺ��ϸ鼭 ���ĺ��� �ش��ϴ� �迭�� ī�����Ѵ�. 
3. �迭�� ��ȸ�ϸ鼭 ����Ѵ�. 
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
