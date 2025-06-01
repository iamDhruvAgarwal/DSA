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
	// mover->next = NULL;
	return head;
}
//Traversal to find if We were able to do it

void Traverse(Node * head){
	Node * temp = head;
	for(int i = 0; temp != nullptr; i++){
		cout << temp->value << "->";
		temp = temp->next;
	}
	cout << "NULL" <<endl;
}

Node* deleteHead(Node * head){
	if(head == NULL) return head;
	Node* temp = head;
	head = head->next;
	return head;
}

Node* deleteTail(Node * head){
	if(head == NULL || head->next == NULL) return head;
	Node* temp = head;
	while(temp->next->next != NULL){
		temp = temp->next;
	}
	delete temp->next;
	temp->next = NULL;

	return head;
}


Node* OlddeleteKthElement(Node * head, int k){
	if(head == NULL || head->next == NULL) return NULL;
	if(k == 0) return deleteHead(head);
	Node* temp = head;
	while(k-1>0){
		temp = temp->next;
		k--;
	}
	// delete temp->next;
	temp->next = temp->next->next;

	return head;
}

Node* deleteKthElement(Node * head, int k){
	if(k == 1) return deleteHead(head);
	if(head == NULL) return NULL;
	int count = 0;
	Node* temp = head;
	Node* prev = head;
	while(temp != NULL){
		count++;
		if(count == k){
			prev->next = prev->next->next;
		}
		prev = temp;
		temp = temp->next;
	}
	return head;
}
//if we had used temp->nxt = null in while then temp would never point to last node hence we would not be able to delete the last Node if the k pointed to it 


//delete value from a LL


Node* deleteValueElement(Node * head, int val){
	// if(k == 1) return deleteHead(head);
	if(head == NULL) return NULL;
	Node* temp = head;
	Node* prev = head;
	while(temp != NULL){
		
		if(temp -> value == val){
		prev->next = prev->next->next;
		break;	
		}
		prev = temp;
		temp = temp->next;
	}
	return head;
}//revise kth element and the value deletion 


//Insertion


//Inserting Head

Node* insertHead(Node * head, int val){
	Node * temp = new Node(val,head);
	return temp;
}





int main() {
	// your code goes here
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	vector<int> arr = {10,20,30,40,15,6};
	Node * head = convertArrToLL(arr);
	// Traverse(head);
	Node * temp = insertHead(head,4);
	Traverse(temp);
	Node * temp2 = insertHead(temp,3);
	Traverse(temp2);
	cout << "Dhruv";
	// Node* temp = head;
	// head = head->next;
	// Node * temp = deleteHead(head);
	// Traverse(temp);
	// Node * temp2 = deleteTail(head);
	// Traverse(temp2);

	// Node * temp3 = deleteKthElement(head,4);
	// Traverse(temp3);


	// Node * temp4 = deleteValueElement(head,20);
	// Traverse(temp4);
	// free(temp);
	// head = head->next;
	// Traverse(head);
	//but we also need to free the mem
	//so we assign the old head to temp and then use free fn

	return 0;
}
