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

    long long n; 
    cin >> n;
    //ccheck if the amount of lucky digits is 4 or 7 
    int count = 0;
    while(n > 0){
        int digit = n%10;
        if(digit == 4 || digit == 7) count++;
        n = n/10;
    }
    cout << ((count == 4 || count == 7) ? "YES" : "NO");

    

    return 0;
}