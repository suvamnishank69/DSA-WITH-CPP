// #include<iostream>
// using namespace std;

// void binarySearch(int arr[],int start,int end,int key){
//     if(start>end) {
//         cout<<"Not found";
//         return;
//     }

//     int mid=(start+end)/2;

//     if(arr[mid]==key){
//         cout << arr[mid] << endl;
//         return;
//     }

//     if(arr[mid]>key){
//         return binarySearch(arr,start,mid-1,key);
//     }else{
//         return binarySearch(arr,start,mid+1,key);
//     }

// }

// int main() {
//     int arr[8] = {1,2,3,4,5,6,7,8};
//     int n=8;
//     int key= 5;

//     binarySearch(arr,0,n-1,key);

// }


 
// RECURSION BINARY CODE

#include<iostream>
using namespace std;

void binarySearch(int arr[], int start, int end, int key){
    if(start > end){
        cout << "Not found";
        return;
    }

    int mid = (start + end) / 2;  //start(end-start)/2

    if(arr[mid] == key){
        cout << arr[mid] << endl;
        return;
    }

    if(arr[mid] > key){
        binarySearch(arr, start, mid - 1, key);
    } else {
        binarySearch(arr, mid + 1, end, key);
    }
}

int main() {
    int arr[8] = {1,2,3,4,5,6,7,8};
    int n = 8;
    int key = 5;

    binarySearch(arr, 0, n-1, key);
}