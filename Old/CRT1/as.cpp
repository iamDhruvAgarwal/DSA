#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

void solution(){
int n;
cin >> n;
int a[n];
int sum = 0;
for(int i = 0 ; i< n ; i++){
	cin >> a[i];
}
for(int i = 0; i < n - 1 ; i++){
	for(int j = 0; j < n - 1 ; j++){
	if(a[j] > a[j+1]){
		swap(a[j],a[j+1]);
	}
}
}
for(int i = 0 ; i< n ; i++){
	//cout << a[i] << "\t";
	if(a[i] < 0){
		sum = sum + (-1)*a[i];
	}else{
		sum = sum + a[i];
	}
}
cout << sum << endl;
//if a[l] is -ve negate true and check till where a[i] stays negative 

}

int main(){
    int t;
    cin >> t;
    
    while(t--){
        solution();
    }
    return 0;
}


