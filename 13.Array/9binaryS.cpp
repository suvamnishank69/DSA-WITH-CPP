//binary search algo
#include<iostream>
using namespace std;

int binSearch(int *arr,int n,int key){

    int st=0,end=n-1;

    while(st <= end){
        int mid = (st+end)/2; // to go for mid of arr
        if(arr[mid] == key){
            return mid;//key found
        }else if(arr[mid] < key){ //2nd half
            st = mid+1;
        }else{
            //1st half
            end = mid-1;
        }
    }

    return -1;

}

int main(){

    int arr[]={2,4,7,9,11,15,18,29,42,65,98};  //arr should be sorted
    int n=sizeof(arr)/sizeof(int);

    cout<<binSearch(arr,n,11)<<"\n";
    return 0;
}