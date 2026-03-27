#include<iostream>
using namespace std;

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(int arr[],int n){

    for(int i=0;i<n-1;i++){
        bool flag = true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }

        if(!flag){
            //array is already sorted
            return;
        }
    }
    print(arr,n); 
}



int main(){

    int arr[5]={5,4,1,2,3};
    bubbleSort(arr,5);
    return 0;

}

// flag is use to avoid extra unrequired swap