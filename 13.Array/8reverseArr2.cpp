//without  extarspace reverse a array
// case-1
// #include<iostream>
// using namespace std;

// void printArr(int *arr,int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" , ";
//     }
//     cout<<endl;
// }

// int main(){

//     int arr[]={5,4,3,9,2};
//     int n = sizeof(arr)/sizeof(int);
//     int start = 0,end = n-1;
    
//     while(start<end){
    
//     int temp =  arr[start];
//     arr[start] = arr[end];
//     arr[end] = temp ;

//     start++;
//     end--;

// }

// printArr(arr,n);
// return 0;

// }

// case-2
// there is a prebuilt function in a c++ which allow you to swap to value

#include<iostream>
using namespace std;

void printArr(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" , ";
    }
    cout<<endl;
}

int main(){

    int arr[]={5,4,3,9,2};
    int n = sizeof(arr)/sizeof(int);
    int start = 0,end = n-1;
    
    while(start<end){
    
        swap(arr[start],arr[end]); // swap is a prebuilt function here which is help to swap the numbers
        start++;
        end--;

}

printArr(arr,n);
return 0;

}