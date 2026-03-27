#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *ptr = &a; //store pointer value of a 
    // & give the adress of variales

    float pi = 3.14;
    float *ptr2 = &pi;

    cout<< &a <<" = "<< ptr << "\n";
    cout<< &pi <<" = "<< ptr2 << "\n";

    // cout<< sizeof(ptr)<<"\n";
    // cout<< sizeof(ptr2)<<"\n";

    // fun fact:in my pc its shows 4 byte
    // and others pc it shows 8 byte
    // some are saying it's bcz i have a 32 bit system which is wrong

    return 0;
}

// (&) address of the variale