#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	 #ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);

#endif
	// calculating by Applying BS on Answers
	// so the approach is to check the value at each mid 
	//by choosing low = 0, high = x;
	//we can then compute the square root
	int x;
	cin >> x; //the no.whose sqrt has to be calculated
	int low = 0, high = x, mid;
	int ans;
	while(low <= high){
		mid = low + (high-low)/2;
		if(mid*mid == x){
			ans = mid;
			break;
		}else if(mid*mid > x){
			ans = mid;
			high = mid - 1;
		}else{
			low = mid + 1;
		}
	}
	(x == ans*ans) ? ans = ans : ans = ans - 1;
	cout << ans;
	return 0;
}
