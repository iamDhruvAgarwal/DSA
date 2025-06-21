#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    if(s[0] >= 'a' && s[0] <= 'z'){
        s[0] = s[0] - 32;
        //as A is 65 while a is 97 so 97 - 65 == 32
    }
    cout << s;
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     cin >> s;
//     s[0] = toupper(s[0]);
//     cout << s;
//     return 0;
// }