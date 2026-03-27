// Q167
#include<iostream>
#include<vector>
using namespace std;

    vector<int> pairSum(vector<int> arr, int target){
        int st=0,end=arr.size()-1;
        int currSum = 0;
        vector<int> ans; // bcz ans is vector

        while(st<end){  // (st is less than end) ==> we can not add same no twice and return the target val
            currSum = arr[st]+arr[end];
            if(currSum == target){
                ans.push_back(st);
                ans.push_back(end);
                return ans;

            }else if(currSum > target){
                end--;
            }else{
                st++;
            }
        }
         return ans; // if the vectors pair doesnot add to target valve
    }


int main(){
    vector<int> vec = {2,7,11,15}; // declareing vectors
    int target = 9; //  tarrget value
    vector<int> ans = pairSum(vec,target); //calling funtion as vector
    cout << ans[0] << " , " << ans[1] << endl;

    return 0;

}