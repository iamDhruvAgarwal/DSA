#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

void solution(){
 int long long n;
 cin >> n;
 cout << n;
// for(int i =0 ; i<n;i++){
// 	
// }
}
int sumdigit(int n){

int sum = 0;

while(n){

sum += n%10;

n /= 10;

}

if(sum<=9) return sum;

else return sumdigit(sum);

}
int main(){
    int t;
    cin >> t;

    sumdigit(t);
//    while(t--){
//        solution();
//    }
    return 0;
}



