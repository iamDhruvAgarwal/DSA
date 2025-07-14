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

    int k, n, w; 
    cin >> k >> n >> w;
    //calc the cost of w bananas needed
    int cost = 0;
    for(int i = 1; i <= w; i++){
        cost += k*i;
    }
    //he has n dollers 
    cout << ((cost <= n) ? 0 : cost - n);
    return 0;
}