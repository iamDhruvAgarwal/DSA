#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x,f[n];
        cin>>n>>x;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            for(int r = 0;r <i;r++)
			if(a[i]>=x){
            	f[r] = i;
			}
        }
        for(int j=0;j<n;j++){
            cin>>b[j];
        }
        
        //cout << b[f];
        for(int r=0;r<n;r++){
            cout << f[r];
        }
		// your code goes here
    }

}

