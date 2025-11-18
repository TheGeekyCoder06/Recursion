#include <iostream>
#include<vector>
using namespace std;

bool isSorted(int arr[], int n){
    if(n==0 || n==1) return true;
    if(arr[0] > arr[1]) return false;
    return isSorted(arr+1, n-1);
    // TC: O(n), SC: O(n)
    // return arr[n-1] >= arr[n-2] && isSorted(arr, n-1);
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    if(isSorted(arr, n)){
        cout<<"Array is sorted";
    } else {
        cout<<"Array is not sorted";
    }
    return 0;
}