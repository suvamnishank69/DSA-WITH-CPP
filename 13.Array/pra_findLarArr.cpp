// find largest & smallest in array
  
#include<iostream>
using namespace std;

int main(){
    int arr[] ={4,2,5,23,6};
    int n = sizeof(arr)/sizeof(int);
    
    int max = arr[0];
    int min = arr[0];
    
    //largest
    for(int i= 0;i<n;i++){
        if(max < arr[i]){
        // if(arr[i]>max) //do same work as above line
            max = arr[i];
        }
    }

    //min
    for(int i= 0;i<n;i++){
        if(min > arr[i]){
        // if(arr[i]>min) //do same work as above line
            min = arr[i];
        }
    }

    cout<<"largest in arr "<<max<<"\n";
    cout<<"smallest in arr "<<min;
    
    return 0;
    
}
