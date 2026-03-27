//reverse an array with extra space
#include<iostream>
using namespace std;

void printArr(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" , ";
    }
    cout<<endl;
}

int main(){

    int arr[] = {5,4,3,9,2};
    int n = sizeof(arr)/sizeof(int);
    // cout<<n<<"\n"; 

    int copyArr[n];
    for(int i=0; i<n;i++){
        int j=n-i-1;
        copyArr[i] = arr[j];
    }

    for(int i=0;i<n;i++){
        arr[i] = copyArr[i];
    }

    printArr(arr,n);
    return 0;

}

// this code work fine too
//  int arr[] = {5,4,3,9,2};
//     int n = sizeof(arr)/sizeof(int);
//     int num =1;
//     int copyArr[n];
//     for(int i=0; i<n;i++){
//         int j=n-num;
//         copyArr[i] = arr[j];
//         num++;
//     }