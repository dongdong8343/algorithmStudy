#include <bits/stdc++.h>
using namespace std;

int main(){
	/*
	1. ��� �Է�
	2. ���� �ӹ� �ð� ���� �迭 2ĭ
	3. min�� max�� ���ؼ� min���� max���� �ݺ��ϸ� ���  
	*/
	int a, b, c, s, e;
	int cnt[104] = { 0 };
	
	cin >> a >> b >> c;
	
	for(int i = 0; i < 3; i++){
		cin >> s >> e;
		for(int j = s; j < e; j++)
			cnt[j]++;
	}
	
	int ret = 0;
	
	for(int i = 0; i <= 100; i++){
		if(cnt[i] != 0){
			if(cnt[i] == 3)
				ret += c * 3;
			else if(cnt[i] == 2)
				ret += b * 2;
			else if(cnt[i] == 1)
				ret += a;
		}
	}
	
	cout << ret;
	
	return 0;  
	
}
