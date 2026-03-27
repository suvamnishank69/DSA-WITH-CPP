#include<iostream>
using namespace std;

int main(){
    // type-1(++,--)
    // int a =5;
    // int *ptr =&a;
    
    // cout<<ptr<<"\n";//1st 0x61ff08
    // ptr++;
    // cout<<ptr<<"\n"; //0x61ff0c
    // ptr--;
    // cout<<ptr<<"\n";//3st  0x61ff08
    // return 0;

    // type-2(ptr+,ptr-3)
    //here 3 is means sizeof(datatype)*3
    // int a =5;
    // int *ptr =&a;
    
    // cout<<ptr<<"\n";//1st 0x61ff08
    // cout<<(ptr+3)<<"\n"; //0x61ff14 //here 3 is means sizeof(datatype)*3
    // ptr = ptr+3;//here 3 is means sizeof(datatype)*3
    // cout<<(ptr-3)<<"\n"; //0x61ff08 //here 3 is means sizeof(datatype)*3
    // return 0;

    // type-3(ptr1-ptr2)
    int a =5;
    int *ptr =&a;
    
    int arr[]={3,4,6,2,7,2,9};
    int *ptr1=arr;
    int *ptr2=ptr+3;

    cout<<*ptr2<<"\n";
    cout<<*ptr2<<"\n";

    cout<<ptr2-ptr1<<"\n";
    return 0;
    // i dont get type-3 but its fine

    // type-4
// copmarison (==,<,<=,>,>=)


    
}
//remeber it a followes hexadecimal proberty 0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f

// run this code and try to notice the answer