// print X to the power N , X^N
#include<iostream>
#include<vector>
using namespace std;

int pow(int x, int n) {
    if(n == 0){
        return 1;
    }
    
    // x^n/2
    int halfPow = pow(x,n/2);
    int halfPowSquare = halfPow * halfPow;

    if(n%2 != 0){
        return x* halfPowSquare;

    }
    return halfPowSquare;
}

int main(){
    cout<<pow(2,3)<<endl;
    return 0;
}


// there is a 3 step formula to solve recursion
// 1.kam
// 2.recursive call
// 3.base case