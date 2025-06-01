// C++ program to demonstrate the use of std::min_element 
#include <iostream> 
#include <algorithm> 
#include <bits/stdc++.h>
using namespace std; 
int main() 
{ 
int input;
	vector <int> numbers;
	// = { 9, 4, 7, 2, 5, 10, 11, 12, 1, 3, 6 }; 
	for(int i = 0; i <10; i++){
		cin >> input;
		numbers.push_back(input);
	}
	// Finding the minimum value between the third and the 
	// fifth element 

	int i1; 
	i1 = *min_element(numbers.begin(), numbers.end()); 

	cout << i1 << "\n"; 
	return 0; 
} 

