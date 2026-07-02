#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *ptr = &a; //store pointer value of a 


    int **pptr = &ptr;
    cout<<&a<<"\n";
    cout<< &ptr <<" = "<< pptr<<"\n";
    return 0 ;
}
