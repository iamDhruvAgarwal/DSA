#include <iostream>
using namespace std;

int main() {
    int a, b, c, result;
    cout << "Enter three integers to find the max integer: " << endl;
    cin >> a >> b >> c;
    result = max(a, max(b, c));
    cout << "Max = " << result << endl;
    return 0;
}

