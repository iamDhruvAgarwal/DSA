#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	//we fucked up we should have taken l and p as float cause if l/p is less then 1 or some 0.0... then when l and p are declared as interger the result l/p would always be 0;
	int t;
	cin >> t;
	float l,p;
	while(t--){
	    cin >> p >> l;
	    if((l/p)*100>=75){
	        cout << "yes \n";
	    }else{
	        cout << "no \n";
	    }
	}
	
return 0;
}

