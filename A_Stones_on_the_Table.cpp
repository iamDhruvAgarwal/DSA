#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n; // n lines for n test cases
    int count = 0;
    string s;
    cin >> s;
    for(int i = 1; i < s.length(); i++){
        if(s[i] == s[i - 1]){
            count++;
        }
    }
    cout << count;
    return 0;
}