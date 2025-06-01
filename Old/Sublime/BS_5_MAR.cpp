#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	vector<int> arr;
	int low = 0, high = arr.size() - 1; mid;
	while(low <= high){
		mid = (low+high)/2;
		if(arr[mid] == target){
			return mid;//or break and store mid
		}else if(arr[mid] > target){
			high = mid - 1;
		}else{
			low = mid + 1;
		}
	} 
	return 0;
}
