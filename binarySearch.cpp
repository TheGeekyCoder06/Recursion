#include <iostream>
#include<vector>
using namespace std;

bool binarySearch(vector<int>& arr , int target, int left , int right){
    if(left > right) return false;
    int mid = left + (right - left)/2;
    if(arr[mid] == target) return true;
    else if(arr[mid] > target){
        return binarySearch(arr , target , left , mid - 1);
    }
    else{
        return binarySearch(arr , target , mid+1 , right);
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    int target;
    cin >> target;
    if(binarySearch(arr, target, 0, n-1)){
        cout << "Element found";
    } else {
        cout << "Element not found";
    }
    return 0;
}