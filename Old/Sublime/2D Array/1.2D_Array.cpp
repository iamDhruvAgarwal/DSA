#include <bits/stdc++.h>
using namespace std;
bool search(int arr[][3],int row, int col, int target){
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(arr[i][j] == target) return true;
		}
	}
	return false;
}
int largetRowSum(int arr[][3], int row, int col){
	//we need to return the single integer max val 
	int maxi = 0;
	for(int i = 0; i < 3; i++){
		int sum = 0;
		for(int j = 0; j < 3; j++){
			sum += arr[i][j];
		}
		if(sum > maxi){
			maxi = sum;
		}
	}
	return maxi;
}
int main() {
	// your code goes here
#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);

#endif
	int arr[3][3];//= {0};
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cin >> arr[i][j];
		}
	}

	for(int i = 0; i < 3; i++){
		int sum = 0;
		for(int j = 0; j < 3; j++){
			cout << arr[i][j] << " ";
			sum += arr[i][j];
		}
		cout << "Row Sum: " << sum;
		cout <<endl;
	}
	// cout << search(arr,3,3,14);
	cout << "Max Row Sum: " << largetRowSum(arr,3,3);
	return 0;
}
