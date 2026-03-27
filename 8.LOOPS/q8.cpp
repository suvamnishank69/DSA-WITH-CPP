// reverse of given  digit 
#include<iostream>
using namespace std;

int main () {
    int n = 10829;  //init
    int lastDig;
    while(n>0){    // condition
        lastDig = n % 10;    
        cout<<lastDig;
        n = n/10;   //updation
    }
    return 0;

}