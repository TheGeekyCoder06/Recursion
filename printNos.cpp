#include <iostream>
#include<vector>
using namespace std;

void printNos(int n){
    if(n==0){
        cout<< "0\n";
        return;
    }
    cout << n << " ";
    return printNos(n-1);
}

int main() {
    int n;
    cin >> n;
    printNos(n);
    return 0;
}