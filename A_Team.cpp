#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n; // n lines for n test cases
    int count = 0;
    while(n--){
        int a, b, c;
        cin >> a >> b >> c;
        if(a+b+c >= 2){
            count++;
        }
    }
    cout << count;
    return 0;
}