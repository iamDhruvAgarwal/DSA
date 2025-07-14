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

    string s;
    cin >> s;
    //if equal low and upp then lowercase output 
    int low = 0, up = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            low++;
        }else if(s[i] >= 'A' && s[i] <= 'Z'){
            up++;
        }
    }
    string ans = "";
    if(low >= up){
        for(char c: s){
            ans += tolower(c);
        }
    }
    else if(low < up){
        for(char c: s){
            ans += toupper(c);
        }
    }
    cout << ans;
    return 0;
}