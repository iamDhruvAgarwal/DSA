#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

void solution(){
string S;
cin >> S;
int a=0;
int b=0;
 for(int i = 0 ; i<5 ; i++){
 	if(S[i] == 'A'){
 		a++;
	 }else{
	 	b++;
	 }
 }
 if(a>b){
 	cout << "A" <<endl;
 }else{
 	cout << "B" <<endl;
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



