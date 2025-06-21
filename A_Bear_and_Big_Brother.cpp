#include <bits/stdc++.h>
using namespace std;
int main(){
    int w1, w2;
    cin >> w1 >> w2; // n lines for n test cases
    int count = 0;
    while(w1 <= w2){
        if(w1 <= w2){
            w1 += 2*w1;
            w2 += w2;
            count++;
        }
    }
    cout << count;
    return 0;
}