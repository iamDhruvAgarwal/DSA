#include <bits/stdc++.h>
using namespace std;
#define n 100

class stacked {
    int* arr;
    int top;
// public:
protected:
    stacked() {
        arr = new int[n];
        top = -1;
    }
    // ~stack() { // Destructor to free memory
    //     delete[] arr;
    // }
    void push(int value) {
        if (top == n - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        top++;
        arr[top] = value;
    }
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return;
        }
        top--;
    }
    int Top() {
        if (top == -1) {
            cout << "Stack is Empty\n";
            return 0;
        }
        cout << arr[top] << endl;
        return arr[top];
    }
    bool empty() {
        return top == -1;
    }
};

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    // cout << "dhruv";
    stacked st;
    st.push(10);
    st.push(20);
    st.Top(); // Should print 20
    // st.pop();
    // st.Top(); //? Should print 10
    // st.pop();
    // st.Top(); // Should print "Stack is Empty"
    
    return 0;
}
