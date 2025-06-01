#include <bits/stdc++.h>
using namespace std;    
int main(){
    long long a,b,t,area;
    cin>>t;
    while(t--){
    cin>>a,b;
    area = a*b;
    //if we get a square after the divide we wont get a new rectangle
    if(b/2 == a/2){
        cout<<"no"<<endl;
    }
    else{
        cout<<"yes"<<endl;
    }
    return 0;
}
}