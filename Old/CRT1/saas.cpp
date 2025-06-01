#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
    string str;
	cin>>str;
    int minOperations = 0;
    int n = str.size();
    vector<char> cont1;
    vector<char> cont2;
      
    for(int i=0; i<n; i=i+2){
        cont1.push_back(str[i]);
    }
      
    for(int i=1; i<n; i=i+2){
        cont2.push_back(str[i]);
    }  
    for(auto i:cont1){
        cout<<i<<" ";
    }
	for(auto i:cont2){
	    cout<<i<<" ";
    }
      
    map<char,int>mp1; 
    for(auto i:cont1){
        mp1[i]++;
    }
    map<char,int>mp2;
    for(auto i:cont2){
        mp2[i]++;
    }
    int maxFreq1 = 0;
    for(auto i :mp1){
        if(i.second> maxFreq1){
            maxFreq1 = i.second;
        }
    }
      
    int maxFreq2 = 0;
    for(auto i :mp2){
        if(i.second> maxFreq2){
            maxFreq2 = i.second;
        }
    }
      
    minOperations = n - maxFreq1- maxFreq2;
    cout<<maxFreq2 << maxFreq1<<endl;
    cout<<"minOperations"<<minOperations;
	return 0;
}
