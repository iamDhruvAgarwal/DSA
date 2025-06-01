#include <bits/stdc++.h>
using namespace std;

int getSum(int *arr, int size){
	// sum += arr[n-1];
	// int i = n - 1;
	if(size == 0) return 0;
	if(size == 1) return arr[0];
	int remainingPart = getSum(arr+1, size - 1);
	int sum = arr[0] + remainingPart;
	return sum;
}

void toString(string arr[], int n){
	if(n == 0) return;
	int digit = n%10;
	n = n/10;
	toString(arr, n);
	cout << arr[digit] <<endl;
	
}

//linear search using reccursion
bool linearSearch(int arr[], int size, int target){
	if(size == 0) return false;
	if(arr[0] == target) return true;
	return linearSearch(arr+1,size-1,target);
}

bool binarySearch(vector<int>& arr, int key, int low, int high){
	if(low > high) return false;
	int mid = (low + high)/2;
	if(arr[mid] == key) return true;
	if(arr[mid] > key) return binarySearch(arr, key, low, mid - 1);
	else return binarySearch(arr,key,mid+1,high);
}


int main() {
	// your code goes here
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
	int arri[10] = {1,2,3,4,5,6,7,8,9,10};
	toString(arr,199); 
	cout << endl;
	cout << getSum(arri,10);
	bool found = linearSearch(arri,10,1); cout << endl;
	cout << found;
	vector<int> bSearch = {1,2,3,4,5,6,7,8,9,10};
	bool binaryfound = binarySearch(bSearch, 2, 0,10);
	cout << binaryfound;
	return 0;
}
