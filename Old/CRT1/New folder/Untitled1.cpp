#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,s,a;
	int x1,x2,x3,x4,y1,y2,y3,y4;
	scanf("%d", &n);
	//number of test cases are 3 the entire itteration should be repeated 3 times or n times
	for(int i = 0; i <n ; i++){
		cin >> x1 >> y1;
		cin >> x2 >> y2;
		cin >> x3 >> y3;
		cin >> x4 >> y4;
		if(x1 == x2){
		 s = y2-y1;	
		 printf("%d", abs(s*s));
		}else if(x1 == x3){
			s = y3-y1;
			printf("%d", abs(s*s));
		}else{
			s = y4-y1;
			printf("%d", abs(s*s));
		}
	}
	
	return 0;
}
