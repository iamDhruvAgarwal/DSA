#include <bits/stdc++.h>
using namespace std;
#define n 100
class stacked{
	int* arr;
	int top;
public:
	stacked(){
		arr = new int[n];
		top = -1;
	}
	void push(int value){
		if(top == n-1){
			cout << "Stack Overflow";
			return;
		}
		top++;
		arr[top] = value;
	}
	void pop(){
		if(top == -1) return;
		top--;
	}
	void Top(){
		if(top == -1){ cout << "Stack is Empty";
		return;

	}
		cout << arr[top];
	}
};


int main() {
	// your code goes here
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// stack<int> s;
	stacked st;
	st.push(0);
	// s.push(1);
	// s.push(2);
	// cout << s.top();
	// s.pop();
	// cout << s.top();
	// s.pop();
	// s.push(49);
	// cout << s.top();
	// while(!s.empty()){
	// 	cout << "Abhi Top hai: " << s.top() <<endl;
	// 	s.pop();
	// }
	// cout << "Is Stack Empty : " << s.empty();
	return 0;
}
