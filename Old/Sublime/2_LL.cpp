#include <bits/stdc++.h>
using namespace std;

class Node{
public:
	int value;
	Node * next;
	Node(int x, Node* next1){
		value = x;
		next = next1;
	}
	Node(int x){
		value = x;
		next = nullptr;
	}
};

int main() {
	// your code goes here
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	Node * head = new Node(0,nullptr);
	// head->next = new Node(1);
	cout << head->next;
	return 0;
}
