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

    int len;
    string s;
    cin >> len >> s;
    int cntA = 0, cntD = 0;
    for(char c : s){
        if(c == 'A') cntA++;
        if(c == 'D') cntD++;
    }
    if(cntA > cntD){
        cout << "Anton";
    }else if(cntA == cntD){
        cout << "Friendship";
    }else{
        cout << "Danik";
    }

    return 0;
}