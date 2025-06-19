#include <bits/stdc++.h>
using namespace std;
int main(){
    int matrix[5][5];
    //5 x 5 matrix hai ye 0 to 4 index hota hai kyuki
    int rows = 5, cols = 4;
    int posx = 0;
    int posy = 0;
    for(int i = 0 ; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> matrix[i][j];
            if(matrix[i][j] == 1){
                //store i and j
                posx = i;
                posy = j;
            }
        }
    }
    
    cout << abs(posx - 2) + abs(posy - 2);
    // [3,1] = [2,2] banane ke steps diff with 2,2 = 1,-1 add
    return 0;
}