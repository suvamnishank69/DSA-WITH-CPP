#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n == 0|| n==1){
        return n;// if n=0 return 0;if n = 1 retutn 1.
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {

    cout<<fibonacci(5)<<"\n";

    return 0;
}


// there is a 3 step  to solve recursion
// 1.kam
// 2.recursive call
// 3.base case