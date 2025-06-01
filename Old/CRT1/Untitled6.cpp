#include <iostream>
using namespace std;

int main() {
    int num[10];
    
    // Input numbers
    cout << "Enter 10 numbers: ";
    for(int i = 0; i < 10; i++) {
        cin >> num[i];
    }

    int smallestPositive = INT_MAX; // Use INT_MAX to initially set a very high value
    bool foundPositive = false;     // Flag to check if any positive number is found

    // Find the smallest positive number
    for(int i = 0; i < 10; i++) {
        if(num[i] > 0 && num[i] < smallestPositive) {
            smallestPositive = num[i];
            foundPositive = true;
        }
    }

    // Output result
    if (foundPositive) {
        cout << "Smallest positive number = " << smallestPositive << endl;
    } else {
        cout << "No positive numbers found." << endl;
    }

    return 0;
}

