//amazon,google
// count total ways to tile a floor(2*n) with tile(2*1)
// let n=3
#include<iostream>
using namespace std;

int tilingProblem(int n) { //2xn
    if(n == 0 || n == 1) {
        return 1;
    }
    //vertical
    int ans1 = tilingProblem(n-1); //2xn

    //horizontal
    int ans2 = tilingProblem(n-2); //2xn-2

    return ans1+ans2;
}

int main() {
    int n = 3;
    cout<<tilingProblem(5)<<endl;
    return 0;
}

// try it u self 



// there is a 3 step formula to solve recursion
// 1.kam
// 2.recursive call
// 3.base case