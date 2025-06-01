#include <bits/stdc++.h>

using namespace std;

int main()

{

 #ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);

#endif
int n;
cin >> n;
vector<char> arr(n);
map<char,int> m;
for(int i = 0; i < n ; i++){
   cin >> arr[i];
   m[arr[i]]++;
}
for(auto it : m){
	cout << it.first << "->" << it.second <<endl;
}
cout << "calling map by map[]" <<endl;
for(int i = 0; i < 11 ; i++){
   cout << m['a'];
}
//precomputation
// int hash[10] = {0};
// for(int i = 0 ; i < n; i++){
// 	hash[arr[i]] = hash[arr[i]] + 1;
// }
// int q;
// int num;
// cin >> q;
// while(q--){
// 	cin >> num;
// 	//fetch
// 	cout << num << " : "<< hash[num] << endl;
// }
	return 0;
}
