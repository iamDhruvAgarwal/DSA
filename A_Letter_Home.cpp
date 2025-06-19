#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t; // n lines for n test cases
    while(t--){
        int count = 0;
        int n, s;
        cin >> n >> s;
        //n is number of pos to visit and s is starting pos
        int arr[n];
        for(int i = 0; i < n;i++){
            cin >> arr[i];
        }
        // now we check which is farther is the front and back point
        // we proceed in direction which is closer
        if(abs(arr[n - 1] - s) < abs(arr[0] - s)){
            count += abs(arr[n-1] - s);
            count += abs(arr[n-1] - arr[0]);
        }else{
            // abs(arr[n - 1] - s) > abs(arr[0] - s)
            count += abs(s - arr[0]);
            count += abs(arr[n-1] - arr[0]);
        }
        cout << count <<endl;
    }
    return 0;
}