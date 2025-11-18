#include <iostream>
#include<vector>
using namespace std;

void printSubsetsWithDup(vector<int>& arr, vector<int>& ans, int i) {
    // TC = O(2^n * n) because there are 2^n subsets and printing each subset takes O(n) time
    // SC = O(n) for the recursion stack and O(n) for the 'ans' vector in the worst case
    if (i == arr.size()) {
        for (int val : ans) {
            cout << val << " ";
        }
        cout << endl;
        return;
    }

    // include arr[i]
    ans.push_back(arr[i]);
    printSubsetsWithDup(arr, ans, i + 1);

    // exclude arr[i] and skip duplicates
    ans.pop_back();
    while (i + 1 < arr.size() && arr[i] == arr[i + 1]) {
        i++;
    }
    printSubsetsWithDup(arr, ans, i + 1);
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }   
    vector<int> ans;
    printSubsetsWithDup(arr, ans, 0);
    return 0;
}