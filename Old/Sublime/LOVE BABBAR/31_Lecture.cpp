#include <bits/stdc++.h>
using namespace std;

void print(int n){
	//base condition
	if(n == 0) return;
	//reccurence relation
	print(n-1);
	cout << n <<endl;
	
}
void printrev(int n){
	//base condition
	if(n == 0) return;
	cout << n <<endl;
	//reccurence relation
	printrev(n-1);
}
long long factorial(int n){
	//base 
	if(n == 0) return 1;
	//relation
	int smallerProblem = factorial(n-1);
	int biggerProblem = n * smallerProblem;
	return biggerProblem;
}

int fibonacci(int N){
	// int M = 0;
	if(N <= 1) return N;
	int smallerProblem = fibonacci(N-2);
	return fibonacci(N-1) + smallerProblem;
}
int power(int n){
	if(n == 0) return 1;
	int smallerProblem = power(n-1);
	int biggerProblem = 2* smallerProblem;
	return biggerProblem;
}

int main() {
	// your code goes here
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	// print(5);
	// cout << endl;
	// printrev(10);
	// cout << "Factorial: " << factorial(6);
	//Now let's calculate the power of 2
	// cout << endl;
	// cout << "Power: "<< power(10);
	for(int i = 0; i < 10; i++){
		cout << fibonacci(i) << " ";
	}
	return 0;
}
