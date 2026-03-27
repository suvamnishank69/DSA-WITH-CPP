//Reverse a given number & print the result n = 10829
#include<iostream>
using namespace std;

int main () {
    int n = 10829;
     int lastDig;
     int res = 0;
    while(n>0){    // condition
        lastDig = n % 10;    
        res = res* 10 + lastDig; //NEW FOR ME
        n = n/10;   //updation
    }
    cout<<res<<endl;
    return 0;

}