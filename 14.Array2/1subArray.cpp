#include<iostream>
using namespace std;

void printSubarrays(int *arr,int n){
    for(int start = 0;start < n; start ++){
        for(int end = start;end<n;end++){
            // cout << "(" << start << "," << end << ")" ; // this line help to print start and end of subArr
            // (0,0)(0,1)(0,2)(0,3)(0,4)
            // (1,1)(1,2)(1,3)(1,4)
            // (2,2)(2,3)(2,4)
            // (3,3)(3,4)
            // (4,4)
            
            for(int i = start;i<=end;i++){
                cout<<arr[i];
            }
            cout<<",";
        }
        cout<<endl;
    }
}



int main(){
    int arr[5] = {1,2,3,4,5};
    int n=5;
    
    printSubarrays(arr,n);
    return 0;
}

// logic-
// 1.try to print subarr(stat,end)(line 7 to 12 )
//2.printthe number between star and end ,and it became a subarray