#include<iostream>
using  namespace std;

void print(int n) {
    if(n == 0){  //base case
        return ;
    }
    cout<< n << " "; //Kaam
    print(n-1);//faith, next call      (case-1)
    // print(--n);//faith, next call   (case-2)
}


int main(){
    print(5);
    return 0;
}

// case(1)
// case(2)
// same same but differnt but still same

// there is a 3 step  to solve recursion
// 1.kam
// 2.recursive call
// 3.base case