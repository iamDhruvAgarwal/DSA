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

    int n; //pos of elephant on cordinate axis while elephant is at pos 0
    cin >> n;
    //elephant can take 1,2,3,4,5 steps 
    int ans = 0;
    
        if(n >= 5){
            ans = n/5 + ((n%5 == 0) ? 0 :  1);
            // n = n%5; //remainder
        }else{
            ans = 1;
        }
    cout << ans;


    return 0;
}