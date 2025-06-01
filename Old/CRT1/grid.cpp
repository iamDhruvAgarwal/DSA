#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

void solution(){
int n;
cin >> n;
int grid[n][n];
for(int i = 0 ; i<n ; i++){
    for(int j =0; j<n ; j++){
        cin >> grid[i][j];
    }
}
for(int i = 0 ; i<n ; i++){
    for(int j =0; j<n ; j++){
        cout << grid[i][j] <<" ";
    }
    cout << endl;
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


