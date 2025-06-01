#include <bits/stdc++.h>
using namespace std;

class LL{
public:
	int val;
	LL* next;
	LL(int x, LL* next1){
		val = x;
		next = next1;
	}
	LL(int x){
		val = x;
		next = nullptr;
	}
};
LL* convertArr2LL(vector<int> &arr){
	LL*head = new LL(arr[0]);
	LL* mover = head;
	for(int i = 0 ; i < arr.size() ; i++){
		LL*temp = new LL(arr[i]);
		mover ->next = temp;
		mover = temp;
	}
	return head;
}
int main() {
	// your code goes here
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	vector<int> arr = {0,1,2,3,4};
	LL * head = convertArr2LL(arr);
	LL* temp = head;
	while(temp){
		cout << temp->val;
		temp = temp->next;
	}
	return 0;
}
