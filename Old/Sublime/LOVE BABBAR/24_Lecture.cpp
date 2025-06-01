#include <bits/stdc++.h>
using namespace std;


int gcd(int a, int b){
	if(a == 0) return b;
	if(b == 0) return a;
	while(a != b){
		if(a>b){
			a = a-b;
		}else{
			b = b-a;
		}
	}
	return a;
}


int main() {
	// your code goes here
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// cout << "dhruv gupta ";
	int a;
	cin >> a;
	// cout << gcd(144,1431);
	cout << a;
	return 0;
}
