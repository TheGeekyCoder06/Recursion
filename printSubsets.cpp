#include <iostream>
#include <vector>
using namespace std;

void printSubsets(vector<int>& arr, vector<int>& ans, int i) { // i is the index
    // TC = O(2^n * n) because there are 2^n subsets and printing each subset takes O(n) time
    // SC = O(n) for the recursion stack and O(n) for the 'ans' vector in the worst case
    if (i == arr.size()) {
        for (int val : ans) {   // FIXED: print 'ans' instead of 'arr'
            cout << val << " ";
        }
        cout << endl;
        return;
    }

    // include arr[i]
    ans.push_back(arr[i]);
    printSubsets(arr, ans, i + 1);

    // exclude arr[i]
    ans.pop_back();
    printSubsets(arr, ans, i + 1);
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> ans;
    printSubsets(arr, ans, 0);
    return 0;
}

// GFG code
/*
class Solution {
public:

    void printSub(vector<int>& arr, vector<int>& curr, vector<vector<int>>& ans, int i) {
        if (i == arr.size()) {
            ans.push_back(curr);
            return;
        }

        // include arr[i]
        curr.push_back(arr[i]);
        printSub(arr, curr, ans, i + 1);

        // exclude arr[i]
        curr.pop_back();
        printSub(arr, curr, ans, i + 1);
    }

    vector<vector<int>> subsets(vector<int>& arr) {
        vector<vector<int>> ans;
        vector<int> curr;
        printSub(arr, curr, ans, 0);
        return ans;
    }
};

*/

