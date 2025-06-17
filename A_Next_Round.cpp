#include <bits/stdc++.h>
using namespace std;
int main(){
    // int n;
    // cin >> n; // n lines for n test cases
    int count = 0;
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        // cin >> arr[i];
        if(arr[i] >= arr[k - 1] && arr[i] != 0){
            count++;
        }
    }
    cout << count;
    return 0;
}