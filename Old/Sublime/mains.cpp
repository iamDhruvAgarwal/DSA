#include <bits/stdc++.h>

using namespace std;

void reverse(char c[], int n){
	int s = 0;
	int e = n-1;
	while(s<e){
		swap(c[s++],c[e--]);
	}
}

int getlength(char name[]){
	int count = 0;
	for(int i =0; name[i] != '\0'; i++){
		count++;
	}
	return count;
}

int main()

{

 #ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);

#endif


	char name[20];
	cin >> name;
	int k = getlength(name);
	// cout << name;
	reverse(name,k);
	cout << name;
	return 0;
}
