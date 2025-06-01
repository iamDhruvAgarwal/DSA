#include <iostream>
using namespace std;

int main() {
    int num[10];
    int i = 0;
    cout  << "Enter Numbers:";
	for(int i =0; i< 10; i++){
    	cin >> num[i];
	}
	for(int i = 0; i < 10; i++){
		if(num[i] > 0 && num[i] > num[i+1]){
			   swap(num[i],num[i+1]);
			   }
	}
	
		cout << "Smallest positive number = " << num[0];
		
	
	
    return 0;
}

