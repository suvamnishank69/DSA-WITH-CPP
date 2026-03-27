// linear search search a key value and return the index value
#include<iostream>
using namespace std;

int lineraSearch(int *arr,int n,int key){
// int lineraSearch(int arr[],int n,int key) do same thing as above
    for(int i=0; i<n;i++){
        if( arr[i] == key){
        // cout<<[i]<<"\n"; //error***
            return i; //print the index in which it find the key
    }
}
return -1; // we use it bcz in arr there is no negative index so it is consider as not exits in arr or not found
    
}

int main(){

    int arr[]={3,4,2,6,7,3,10,56,35,7,8,3};
  
    int n = sizeof(arr)/sizeof(int);

    cout<<lineraSearch(arr,n,10)<<endl;
    return 0;

}

//error*** = i also dont know why this line is not working