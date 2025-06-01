#include <bits/stdc++.h>
using namespace std;
class Node{
public:
	int value;
	Node*next;
	Node(int x, Node* next1){
		value = x;
		next = next1;
	}
	Node(int x){
		value = x;
		next = NULL;
	}
};


//array to LL conversion
Node* convertArrToLL(vector<int> &arr){
	Node* head = new Node(arr[0]);
	Node* mover = head;
	for(int i = 1; i < arr.size(); i++){
		Node* temp = new Node(arr[i]);
		mover->next = temp;
		mover = temp;
	}
	return head;
}

void Traverse(Node* head){
	Node* temp = head;
	while(temp != NULL){
		cout << temp->value << "->";
		temp = temp->next;
	}
	cout << "NULL"<<endl;
}

//Now Deletion start
//delete at head

Node* deleteHead(Node* head){
	if(head == NULL || head->next == NULL) return NULL;
	Node * temp = head;
	head = head->next;
	return head;
}

//delete tail of a LL

Node* deleteTail(Node* head){
	// if(head == NULL || head->next == NULL) return NULL;
	Node * temp = head;
	while(temp->next->next != NULL){
		temp = temp->next;
	}
	delete temp->next;
	temp->next = NULL;
	return head;
}

//kth position

// Node* deleteKthNodeLL(Node* head, int k){
// 	Node* temp = head;
// 	while(temp-)
// }

int main() {
	// your code goes here
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	cout << "DhruvA"<<endl;
	vector<int> arr = {1,2,3,4,5};
	Node * head = convertArrToLL(arr);
	Traverse(head);
	Node *tempDeleteHead = deleteHead(head);
	Traverse(tempDeleteHead);
	Node *tempDeleteTail = deleteTail(head);
	Traverse(tempDeleteTail);

	return 0;
}
