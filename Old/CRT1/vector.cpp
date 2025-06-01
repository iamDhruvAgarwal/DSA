#include <iostream>
using namespace std;
#include <vector>

int main() {
    vector<int> numbers; // Create an empty vector to store integers
    int input;

    cout << "Enter integers (enter -1 to stop):" << endl;

    while (true) {
        cin >> input;
        
        if (input == -1) {
            break; // Exit the loop if -1 is entered
        }
        
        numbers.push_back(input); // Add the input to the vector

        // Check if the vector is full
        if (numbers.size() == numbers.capacity()) {
            cout << "Vector is full. Increasing size..." << endl;
            numbers.reserve(numbers.capacity() * 2); // Double the capacity
        }
    }

    cout << "Numbers entered:" << endl;

    // Print the numbers stored in the vector
// Print the numbers stored in the vector
for (size_t i = 0; i < numbers.size(); ++i) {
    cout << numbers[i] << " ";
}
cout << endl;

    cout << endl;

    return 0;
}


