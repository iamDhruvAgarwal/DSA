#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int num[10];
    int i = 0;
    int k;
    cout  << "Enter Numbers:";
	for(int i =0; i< 10; i++){
    	cin >> num[i];
	}
	cout << " Enter the k to find kth largest num: " ;
	cin >> k;
	sort(num, num + 10);
//	for(int i = 0; i< 10 ; i++){
//		cout << num[i];
//	}
  
	cout << "kth largest number = " << num[10-k];
    return 0;
}

