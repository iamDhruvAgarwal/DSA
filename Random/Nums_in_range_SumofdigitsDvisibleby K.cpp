#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int l, r, k;
	cin >> l;
	cin >> r;
	cin >> k; //digits div by k
	// we got the range
	int count = 0;
	if(k == 1){
		cout << r - l + 1 << endl;
		return 1;
	}
	for(int i = l; i <= r; i++){
		//we need to check if the sum of digit of each i is divisble by k
		int num = i;
		int sum = 0;
		while(num > 0){
			int digit = num%10;
			num /= 10;
			sum += digit;
		}
		if(sum%k == 0) count++;
	}
	cout << count << endl;
	return 0;
}
