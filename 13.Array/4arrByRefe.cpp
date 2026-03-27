#include<iostream>
using namespace std;

void func(int arr[]){
    arr[0] = 1000;
}

void func2(int *ptr){
    ptr[0] = 1000;
}

int main(){
   
    int arr[] ={1,4,6,3,8,5};

    func(arr);// passing array name is equal to passing the pointer
    // func2(arr); same work as above line 
    cout<<*arr<<endl;
    cout<<*(arr+1)<<endl;
    return 0;
    



}