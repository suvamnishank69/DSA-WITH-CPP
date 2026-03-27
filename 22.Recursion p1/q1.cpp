// For a give arr of size N.You have to find all the occurrence of a given element and print them(use recursive)
// Sample input:arr[]={3,2,4,5,6,7,2,2} 
#include<iostream>
using namespace std;

void allOccurence(int arr[],int n,int idx,int key) {

    if(idx == n){ //base case
        return ;
    }

    if(arr[idx] == key) {
        cout<<idx<<endl;
    }
    allOccurence(arr,n,idx+1,key);
}

int main(){
    int arr[8] = {3,2,5,2,6,8,2,1};
    int n = 8;// size of arr
    int key = 2;

    allOccurence(arr,n,0,key);

    return 0;
}
// base case :- where  should code must end;
// or till how much should code should run


// there is a 3 step formula to solve recursion
// 1.kam
// 2.recursive call
// 3.base case
