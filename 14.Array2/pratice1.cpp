//leetcode q.217
#include<iostream>
using namespace std;

bool containsDuplicate(int *nums, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] == nums[j]) {
                return true;
            }
        }
    }
    return false;
}

//method 2 use sorting method(not my ans)
// bool containsDuplicate2 (vector<int>& nums) {
//     sort(nums.begin(), nums.end());
// // nums.begin(): This is an iterator that points to the first element of the nums vector. It marks the start of the range to be sorted

//     for (int i = 1; i <n; ++i) {
//         if (nums[i - 1] == nums[i]) {
//             return true;
//         }
//     }
//     return false;
// }



int main(){

    int nums[] = {1,2,1,1,3,3,2,3,2,4};
    int n = sizeof (nums)/sizeof (int);

    if (containsDuplicate(nums, n)) {
        cout << "Duplicates found\n";
    } else {
        cout << "No duplicates\n";
    }

    return 0;
}






