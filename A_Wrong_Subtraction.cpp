#include <bits/stdc++.h>
using namespace std;

// Useful type definitions (add as needed)
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;

int main() {
    // Fast input/output
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // File input/output (only works locally, not on online judges)
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n, t;  // number of test cases
    cin >> n >> t;  
    // if last digit 0 then /10 else -1 
    // t--;
    while(t--) {
        // Your solution code goes here
        if(n%10 == 0){
            //last digit is 10
            n = n/10;
        }else{
            n -= 1;
        }
    }
    cout << n;

    return 0;
}