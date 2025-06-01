#include <bits/stdc++.h>
using namespace std;
//int main(){
////	cout << "Works";
//int arr[5] = {1,2,3,4,5};
//int i = 4;
//while( i >= 0){
//	cout << arr[i];
//	i--;
//	
//}
//	return 0;
//}
int main(){
	vector<int> v1;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		v1.push_back(i);
	}
	for(int i = 0; i < n; i++){
		cout << v1[i];
}
	return 0;
}
