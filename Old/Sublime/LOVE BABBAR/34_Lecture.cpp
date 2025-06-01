#include <bits/stdc++.h>
using namespace std;
void reverse(string& str, int s, int e){
	if(s>e) return;
	swap(str[s], str[e]);
	s++;
	e--;
	reverse(str, s, e);
}
int main() {
	// your code goes here
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	string dhruv = "dhishkiyaaon";
	reverse(dhruv, 0, dhruv.length() - 1);
	cout << dhruv;
	return 0;
}
