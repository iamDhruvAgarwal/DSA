#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while(t--){
		long long x, y;
        cin >> x >> y;
        if(x < y){
            if(y%x == 0){
                cout << y/x - 1 << endl;
            }else{
                cout << y/x << endl;
            }
        }else{
            cout << 0 << endl;
        }
    }
	return 0;
}
