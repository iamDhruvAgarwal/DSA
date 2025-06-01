#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

void solution(){
ll n; cin >> n ;
ll arr[n];
ll sum = 0;
for (ll i = 0 ; i < n ; i++ ){
	cin >> arr[i];
	sum = sum + arr[i];
}
if(sum%3 != 0){
	for(ll i = 0; i <n ; i++){
		
	}
}else {
	cout << 0 <<endl;
}
}

int main(){
    int t;
    cin >> t;
    
    while(t--){
        solution();
    }
    return 0;
}


