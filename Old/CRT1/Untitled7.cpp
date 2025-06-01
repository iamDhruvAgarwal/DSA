#include <iostream>
using namespace std;

int main() {
    int num[10];
    
    cout << "Enter Numbers: ";
    for(int i = 0; i < 10; i++){
        cin >> num[i];
    }
    
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9 - i; j++){
            if(num[j] > 0 && num[j] > num[j + 1]){
                swap(num[j], num[j + 1]);
            }
        }
    }
    
    int smallestPositive = -1; 
    for(int i = 0; i < 10; i++){
        if(num[i] > 0) {
            smallestPositive = num[i];
            break;
        }
    }
    
    if(smallestPositive != -1) {
        cout << "Smallest positive number = " << smallestPositive;
    } else {
        cout << "No positive numbers found.";
    }
    
    return 0;
}

