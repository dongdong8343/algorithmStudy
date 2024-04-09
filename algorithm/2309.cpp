#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[9];
	int sum = 0;
	
	for(int i = 0; i < 9; i++){
		cin >> arr[i];
		sum += arr[i];
	}
	
	sort(arr, arr + 9);
	
	
	int a = -1, b = -1;
	
	for(int i = 0; i < 9; i++){
		for(int j = i + 1; j < 9; j++){
			if(sum - arr[i] - arr[j] == 100){
				a = i;
				b = j;
				break;
			}
		}
		if(a != -1)
		 break;
	}
	
	for(int i = 0; i < 9; i++){
		if(a == i || b == i)
			continue;
		cout << arr[i] << "\n";
	}
	
	
	
	return 0;
}
