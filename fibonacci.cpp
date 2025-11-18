#include <iostream>
#include<vector>
using namespace std;

int fib(int n){ // TC: O(2^n), SC: O(n)
    if(n==0 || n==1) return n;
    return fib(n-1) + fib(n-2);
}

int main() {
    int n;
    cin>>n;
    cout<<fib(n);
    return 0;
}

// Recursive tree for fib(4)
/*
                fib(4)
               /      \
          fib(3)       fib(2)           
            /   \         /    \
         fib(2)  fib(1)  fib(1)  fib(0)
        /   \                               
        fib(1)  fib(0)    
The time complexity of this approach is O(2^n) because each function call generates two more calls (except for the base cases). The space complexity is O(n) due to the maximum depth of the recursion stack.
*/