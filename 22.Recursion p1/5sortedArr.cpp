//Check if array sorted
#include<iostream>
using namespace std;

bool isSorted(int arr[],int n,int i) {
    if(i == n-1){   //when we reach last element
        return true;
       
    }
    if(arr[i] > arr[i+1]){
        return false;
    }
   

    return isSorted(arr,n,i+1);
}

int main(){
    int arr1[5] = {1,2,3,4,5};//sorted : 1
    int arr2[5] = {1,2,5,4,3};//unsorted :0


    cout << isSorted(arr2,5,0);
    return 0;
}

// 1 -> sorted
// 0 -> unsorted


// there is a 3 step  to solve recursion
// 1.kam
// 2.recursive call
// 3.base case