#include<iostream>
using namespace std;

int sum(int n ){
    if(n == 1) {
        return 1;
    }

    return n + sum(n-1);

}


int main(){
    cout<<sum(5);
    return 0;
}

// there is a 3 step  to solve recursion
// 1.kam
// 2.recursive call
// 3.base case