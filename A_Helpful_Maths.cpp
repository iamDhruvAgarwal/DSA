#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    cin >> s1;
    vector<char> hash;
    for(int i = 0; i < s1.length(); i++){
        if(s1[i] != '+'){
            hash.push_back(s1[i]);
        }
    }
    sort(hash.begin(), hash.end());
    string ans = "";
    for(auto it : hash){
        ans.push_back(it);
        ans.append("+");
    }
    ans.pop_back();
    cout << ans;
    return 0;
}