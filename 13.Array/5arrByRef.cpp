#include<iostream>
using namespace std;

void printArr(int nums[],int n){
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" , ";
    }
    cout<<endl;
}

int main(){
    int arr[]={3,5,2,7,9};
    int n= sizeof(arr)/sizeof(int);
    cout<<"array size = "<<sizeof(arr)<<endl;
    printArr(arr,n);
    return 0;
}