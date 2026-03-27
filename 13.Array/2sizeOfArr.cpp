#include<iostream>
using namespace std;

int main(){
    int marks[] = {1,2,3,4,5};

    // cout<<sizeof(marks)<<"\n";// gives the bit it has store. 
    // len/size = sizeof(arr)/sizeof(datatype)
    int n = sizeof(marks)/sizeof(int);  // effcernt way to find the size of array 
    cout<< n <<"\n";
    return 0;
}