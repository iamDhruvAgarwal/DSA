#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    int low = 0;
    int high = 4;
    int target = 2;
    while(low <= high){
        int mid = low + (high-low)/2;
        if(arr[mid] == target){
            cout << "Target Found" <<endl;
            break;
        }else if(arr[mid] > target){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return 0;
}