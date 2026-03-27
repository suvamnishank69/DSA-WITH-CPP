//paytm
//binary string problem
//print all binary of size N without any consecutive 1s.
#include<iostream>
#include<string>
using namespace std;

void binString(int n,int lastPlace, string ans ) {
    if(n == 0) {
        cout<< ans << endl;
        return ;
    }
    if (lastPlace != 1) {
        binString(n-1,0,ans+'0');
        binString(n-1,1,ans+'1');
        
    } else{
        binString(n-1,0,ans+'0');
    }
}

int main() {
    string ans = "";
    binString(3,0,ans);

    return 0;
}




// there is a 3 step formula to solve recursion
// 1.kam
// 2.recursive call
// 3.base case
