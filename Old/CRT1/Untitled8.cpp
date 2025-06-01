#include <iostream>
using namespace std;

int main() {
    int num[10];
    int i = 0;
    int sp;
    cout  << "Enter Numbers:";
	for(int i =0; i< 10; i++){
    	cin >> num[i];
	}
	for(int i = 0; i < 10; i++){
		if(num[i] > 0 && num[i] > num[i+1]){
			   swap(num[i],num[i+1]);
			   }
	}
	for (int i = 0 ; i< 10 ; i++){
		if(num[i] >= 0){
			   	sp = num[i];
			   	break;
			   }
	}
	cout << "Smallest positive number = " << sp;
    return 0;
}

