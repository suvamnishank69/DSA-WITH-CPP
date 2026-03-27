#include<iostream>
#include<vector>
using namespace std;

int lastOccur(vector<int>arr, int target,int i){
    if(i == arr.size()){
        return -1;
 }

 int idxFound = lastOccur(arr,target,i+1);

 if(idxFound == -1 && arr[i] == target) {
    return -1;
 }
return idxFound;
}

int main(){
    vector<int> arr = {1,2,3,3,3,4};
    cout<<lastOccur(arr,3,0)<<endl;
    return 0;
}

// logic of thi s is we have to traves this arr from (i+1),then (i)



// there is a 3 step formula to solve recursion
// 1.kam
// 2.recursive call
// 3.base case


// idxFound == -1  does not exits afterwards