#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n; // n lines containing 1 word each
    while(n--){
        string str;
        cin >> str;
        if(str.length() <= 10){
            cout << str << endl;
            break;
        }
        //now the logic when the word is longer then 10 
        // string ans = "";
        // ans.push_back(str[0]);
        // int i = str.length();
        // i -= 2;
        // ans.push_back(i);
        // ans.push_back(str[str.length() - 1]);
        cout << str[0] << str.length() - 2 << str[str.length() - 1] << endl;
    }
    return 0;
}