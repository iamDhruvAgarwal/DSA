#include <bits/stdc++.h>
using namespace std;
int main(){
    int m, n;
    cin >> m >> n; // n lines for n test cases
    //one domino piece takes 2x1 sq feet and we have total mxn sq feet 
    int totalsq = m*n;
    int domSize = 2;
    cout << totalsq/domSize ;
    return 0;
}