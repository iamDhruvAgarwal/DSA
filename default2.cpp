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
    
    int t;  // number of test cases
    cin >> t;
    
    while(t--) {
        // Your solution code goes here
        
        // Example: read two numbers and print their sum
        int a, b;
        cin >> a >> b;
        cout << a + b << "\n";  // \n is faster than endl
    }
    
    return 0;
}