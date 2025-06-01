//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//	// your code goes here
//	int t;
//	int x,y;
//	cin >> t;
//	for(int i = t; t> 0; i--){
//	    cin >> x >> y;
//	    cout << y-x;
//	}
//return 0;
//}
//
////#include <iostream>
////using namespace std;
////
////int main() {
////	int T,X,Y;
////	cin>>T;
////	while(T--)
////	{
////	    cin>>X>>Y;
////	    cout<<Y-X<<endl;
////	}
////	return 0;
////}

//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//	// your code goes here
//	//insta spam following +10 then followers x and your
//	int t, x, y;
//	cin >> t;
//	while(t--){
//	    if((x-y) >= 10){
//	        cout << "yes" <<"\n";
//	    }else{
//	        cout <<  "no" <<"\n";
//	    }
//	    
//	}
//return 0;
//}
#include <bits/stdc++.h>
using namespace std;
//
//int main() {
//	// your code goes here
//	//x y per month budget z 
//	// only join 1 if w pt 2 if no gym 0
//	int t,x,y,z;
//	cin >> t;
//	while(t--){
//	    if(z>= (x+y)){
//	        cout << 2 <<"\n";
//	    }else if(z< (x+y) && z>=x){
//	        cout << 1 <<"\n";
//	    }else {
//	        cout << 0 <<"\n";
//	    }
//	    
//	    
//	    
//	}
//	return 0;
//}
int solve(int x) { 
if (x < 0) return 1; 
if (x == 0) return 0; 
int c,coins;
int best = 1; 
for (int c : coins) { best = min(best, solve(x-c)+1);
} 
return best; 
}
int main(){
	cout << solve(10);
	
	
	
	
	return 0;
}
