#include <bits/stdc++.h>
using namespace std;

class Node{
public:
	int val;
	Node* next;
    Node* back;
	Node(int x, Node* next1, Node* back1){
		val = x;
		next = next1;
        back = back1;
	}
	Node(int x){
		val = x;
		next = nullptr;
        back = nullptr;
	}
};
Node * convertArr2DLL(vector<int>& arr){
    Node * head = new Node(arr[0]);
    //we have got the head now
    Node * prev = head;
    for(int i = 1; i < arr.size(); i++){
        Node * temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}
void print(Node * head){
    while(head != nullptr){
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

Node* deleteHead(Node * head){
    if(head == nullptr || head->next == nullptr){
        return nullptr;
    }
    Node * prev = head;
    head = head->next;
    prev->next = nullptr;
    head->back = nullptr;
    delete prev;
    return head;
}

Node* deleteTailNode(Node * head){
    if(head == nullptr || head->next == nullptr){
        return nullptr;
    }
    Node * temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    // we have reached the last node 
    Node * prev = temp->back;
    prev->next = nullptr;
    temp->back = nullptr; // could also itterate till 2nd last element ->next->next and then delete the tail simply just like LL
    delete temp;
    return head;
}

Node * deleteKth(Node * head, int k){
    if(head == nullptr) return nullptr;
    int count = 1; // we are on head
    //we have to traverse till kth element
    Node* temp = head;
    while(temp != nullptr && count < k){
        count++;
        // if(count == k) break;
        temp = temp->next;
    }//reached kth pos
    Node * prev = temp->back;
    Node * front = temp->next;
    if(prev == nullptr && front == nullptr){
        return nullptr;
    }else if(prev == nullptr){
        //we are at the head;
        return deleteHead(head);
        // return head;
    }else if(front == nullptr){
        return deleteTailNode(head);
        //  head;
    }
    //we have k/pos in between somewhere 
    prev->next = front;
    front->back = prev;
    temp->next = nullptr;
    temp->back = nullptr;
    delete(temp);
    return head;
    // return nullptr;
}

Node * insertHead(Node * head, int x){
    Node * newHead = new Node(x, head, nullptr);
    head->back = newHead;
    return newHead;
}

Node * insertTail(Node * head, int x){
    Node * newNode = new Node(x);
    if(head == nullptr){
        return newNode;
    }
    Node * temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->back = temp;
    return head;
}

Node* insertbeforeTail(Node* head, int x){
    Node * tail = head;
    while(tail ->next != nullptr){
        tail = tail->next;
    }
    Node * prev = tail->back;
    if(prev == nullptr){
        return insertHead(head,x);
    }
    Node * newNode = new Node(x, tail, prev);
    prev->next = newNode;
    tail->back = newNode;
    return head;
}

Node * insertbeforeKth(Node* head, int k, int val){
    int count = 1;
    if(k <= 1) return insertHead(head, val);
    Node * temp = head;
    while(temp != nullptr && count < k){
        count++;
        temp = temp->next;
    }//standing before the kth pos
    if(temp == nullptr) return insertTail(head, val); //k was greater then size of DLL
    Node * prev = temp->back;
    Node * newNode = new Node(val, temp, prev);
    prev->next = newNode;
    temp->back = newNode;
    return head;
}


int main() {
	// your code goes here
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	vector<int> arr = {10,12,2,3,4};
	Node * head = convertArr2DLL(arr);
    print(head);
    // head = insertHead(head, 4);
    // print(head);
    // head = insertTail(head, 360);
    // print(head);
    // head = insertbeforeTail(head, 330);
    // print(head);
    head = insertbeforeKth(head, 5, 45);
    print(head);
	return 0;
}
