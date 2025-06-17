#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>> str;
    unordered_set<char> hash;
    for(int i = 0;i < str.length(); i++){
        hash.insert(str[i]);
    }
    int count = 0;//distinct
    if(hash.size()%2 != 0){
        cout << "IGNORE HIM!";
    }else{
        cout << "CHAT WITH HER!";
    }
    return 0;
}