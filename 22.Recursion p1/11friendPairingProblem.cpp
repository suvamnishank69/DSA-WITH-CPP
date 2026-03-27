#include<iostream>
#include<string>
using namespace std;

int friendPairing(int n) {
    if(n == 1 || n == 2) {
        return n;
    }
    return friendPairing(n-1)+(n-1)*friendPairing(n-2);
}

int main(){

    cout<<friendPairing(4);
    return 0;
}



// there is a 3 step formula to solve recursion
// 1.kam
// 2.recursive call
// 3.base case