#include <bits/stdc++.h>
using namespace std;

int main(){
	/*
	1. 요금 입력
	2. 차가 머문 시간 저장 배열 2칸
	3. min과 max를 구해서 min부터 max까지 반복하며 계산  
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
