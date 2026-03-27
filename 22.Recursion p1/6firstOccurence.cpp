#include<iostream>
#include<vector>
using namespace std;

int firstOccur(vector<int>arr,int i,int target) {
    if(i == arr.size()){
        return -1;
    }
    if(arr[i] == target){
        return i;
    }
    return firstOccur(arr,i+1,target);
    


}



int main(){
    vector<int>arr={1,2,3,3,3,4};
    cout<<firstOccur(arr,0,3)<<endl;
    return 0;
}



// there is a 3 step  to solve recursion
// 1.kam
// 2.recursive call
// 3.base case