#include <bits/stdc++.h>
using namespace std;
void plusMinus(vector<int> arr) {
	
	
	
	
	}
int main(){
	int c,p,n =0;
//	int i = 0;
	int arr[3]= {1,-1,0};
	cout << "BOSS Dhruv";
	//out put should be 1/3 1/3 and 1/3 in float as 6 decimal places
	int x = sizeof(arr)/sizeof(arr[0]);
	cout << x; // x is number of elements 
	int i = x -1;
//	for(int i = 0; i<x; i++){
//		if(arr[i] > 0){
//			p++;
//		}else if(arr[i] == 0){
//			c++;
//		}else {
//			n++;
//		}
//	}
	while(i--){
		//x is 3 so there 1 extra itteration
		//i++;
		if(arr[i] > 0 && arr[i] != 0){
			p++;
		}else if(arr[i] < 0){
			n++;
		}else {
			c++;
		}
	}
	cout << p << c << n;
	
	
	
	
	
	
	return 0;
}
