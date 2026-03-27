#include<iostream>
#include<string>
#include<vector>
using namespace std;

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void changeArr(int arr[],int n,int i){
    if(i ==n ) {
        printArr(arr,n);
        return;
    }

    // arr[i] = i+1;  //before function for recurstion
    changeArr(arr,n,i+1);
    arr[i] -= 2; //after function for backtracking

}


int main(){
    int arr[5] = {1,2,3,4,5};
    int n=5;

    changeArr(arr,n,0);
    printArr(arr,n);
    return 0;
}