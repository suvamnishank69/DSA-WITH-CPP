#include<iostream>
using namespace std;

// factorial
int factorial(int n) {
    if(n == 0) {
        return 1;
    }

    return n * factorial(n-1);
}

int main() {
    int ans = factorial(5);
    cout<< ans <<endl;
    return 0;
}

// the concept is (belive it )
// that the solution of small answer will be solve



// RECURSION--> It is a method of solveing computational problem where the solution
//  depends on solutions to smaller instances of the same problem

// !5
//  ^
//  |
// !4
//  ^
//  |
// !3
//  ^
//  |
// !2
//  ^
//  |
// !1

// TIPS
// 1.Base case/ smallest problem
// 2>WHAT to do(in each func call)
// 3.inner func

// i dont know how to make notes of (recursion)


// there is a 3 step  to solve recursion
// 1.kam
// 2.recursive call
// 3.base case