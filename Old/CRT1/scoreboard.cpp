//#include <bits\stdc++.h>
#include <bits/stdc++.h>
using namespace std;
int main(){
	//N matches two teams print total score if draw
	int n,a,b,sum1,sum2;
	int ar[15],br[15];
	cin >> n;
	sum1 = ar[sizeof(ar)/sizeof(ar[0])];
	sum2 = sum1;
	//the score should add so we need something recursive if there are two scres in each match the score should be added n times
	for(int i = 0;i<n;i++){
		cin >> ar[i] >> br[i];
		//cout << a << b;
		sum1+=ar[i];
		sum2+=br[i];
		
		
		
	}
	if(sum1>sum2){
		cout << "Takahashi \n";
	}else if(sum2>sum1){
		cout << "Aoki \n";
	}else{
		cout << "Draw \n";
	}
	//cout << sum1 << sum2; 
	
	
	
	return 0;
}
