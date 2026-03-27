#include<iostream>
#include <algorithm>// to use sort type algo i have to include this file
using namespace std;

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int arr[8] = {3,6,2,8,9,0,1,5};
    // sort(arr,arr+8);//this is for ascending
    // sort(arr+2,arr+5);
    // sort(arr+2,arr+6);
    
    //desending 
    sort(arr,arr+8,greater<int>());//this is for desending

    print(arr,8);
    return 0;
}