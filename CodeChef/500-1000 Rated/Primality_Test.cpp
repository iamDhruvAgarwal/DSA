#include <bits/stdc++.h>
using namespace std;

// bool isPrime(int n){
// 	for(int i = 2; i*i < n; i++){
// 		if(n%i == 0) return false;
// 	}
// 	return true;
// }

int main() {
	// your code goes here
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	int n = 100000;
	vector<bool> isPrime(n + 1, true);
	for(int i = 2; i*i <= n; i++){
		if(isPrime[i]){
			for(int j = i*i; j <= n; j += i){
				isPrime[j] = false;
			}
		}
	}
	//need to check if the given int is prime or not
	while(t--){
		int n; 
		cin >> n;
		if(isPrime[n]){
			cout << "yes" <<endl;
		}else{
			cout << "no" <<endl;
		}
	}
	return 0;
}
