#include <bits/stdc++.h>
using namespace std;

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
		// cout <<endl;
	}

	for(int i = 0; i < 3; i++){
		int sum = 0;
		for(int j = 0; j < 3; j++){
			cout << arr[i][j] << " ";
			sum += arr[i][j];
		}
		// cout << "Row Sum: " << sum;
		cout <<endl;
	}
	cout << "Printing like a wavy: " <<endl;
	for(int i = 0; i < 3; i++){
		int sum = 0;
		if(i%2 == 0){
			for(int j = 0; j < 3; j++){
			cout << arr[j][i] << " ";//col wise printed as indexed reversed
			// sum += arr[i][j];
		}
	}else{
		for(int z = 2; z >= 0; z--){
			cout << arr[z][i] << " ";//col wise printed as indexed reversed
			// sum += arr[i][j];
		}
	}
		// cout << "Row Sum: " << sum;
		// cout <<endl;
	}
	// cout << search(arr,3,3,14);
	//cout << "Max Row Sum: " ;//<< largetRowSum(arr,3,3);
	return 0;
}
