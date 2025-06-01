#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	//1 not prime
	//to check if a number is prime or not it should have divi by multi numbers
	int t; cin >> t;
	int div = 0;
	// if div by n and 1 then div = 2 the case of prime and if div > 2 then not prime
	while(t--){
	    int n;
	    
	    cin >> n;
	    int N = n;
	    //n%n == 0 and n%1 ++ n and N%2 se N tak if it's ever 0
	    while(N--){
	        if(n%N == 0){
	            div++;
	        }
	    }
	    if(div>2){
	            cout << "yes\n";
	    }else{
	            cout << "no\n";
	    }
	    div = 0;
	}
	return 0;
}

