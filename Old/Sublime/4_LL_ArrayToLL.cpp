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

Node* convertArrToLL(vector<int> &arr){
	Node* head = new Node(arr[0]);
	Node* mover = head;
	//int i = 1 as 0th node is already inserted as head
	for(int i = 1; i < arr.size(); i++){
		Node* temp = new Node(arr[i]);
		mover->next = temp;
		mover = temp;
	}
	return head;
}
//Traversal to find if We were able to do it

void Traverse(Node * head){
	Node * temp = head;
	for(int i = 0; temp != nullptr; i++){
		cout << temp->value << "->";
		temp = temp->next;
	}
	cout << "NULL";
}

int main() {
	// your code goes here
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	vector<int> arr = {1,2,3,4,5};
	Node * head = convertArrToLL(arr);
	Node* temp = head;
	Traverse(head);
	return 0;
}
