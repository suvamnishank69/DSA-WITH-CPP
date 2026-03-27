//MAX SubArray Sum
//Brute Force Approach
#include<iostream>
#include <climits> // this code is written bcz of for C++: INT_MIN, INT_MAX
using namespace std;

 void maxSubarraySum1(int *arr,int n){ //brute force
    int maxSum = INT_MIN; // this line intialise maxsum with (-infinity till possible in computer)

    for(int start = 0;start<n;start++){
        for(int end=start;end<n;end++){
            int currSum = 0;
            for(int i=start;i<=end;i++){
                currSum += arr[i];
                // currSum = currSum+arr[i]; // same work as above    
            }
            cout<<currSum<<",";
            maxSum = max(maxSum,currSum);// it a bulit-in fuction which take two integer value and return the max or bigger one 
        }

        cout<<endl;
    }
    cout<<"maximum subarray sum = "<<maxSum<<endl;
}


void maxSubarraySum2(int *arr,int n){ //slightly optimized
    int maxSum = INT_MIN; // this line intialise maxsum with (-infinity till possible in computer)

    for(int start = 0;start<n;start++){
        int currSum = 0;
        for(int end=start;end<n;end++){
                currSum += arr[end];
            
            maxSum = max(maxSum,currSum);// it a bulit-in fuction which take two integer value and return the max or bigger one 
        

    }

    }
    cout<<"maximum subarray sum = "<<maxSum<<endl;
}

void maxSubarraySum3(int *arr,int n){ //Kadane's algo
    int maxSum = INT_MIN; 
    int currSum = 0;
    
    for(int i=1;i<n;i++){
        currSum += arr[i];
        maxSum = max(currSum,maxSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
    cout<<"maximum subarray sum = "<<maxSum<<endl;

}


int main(){
    int arr[6]={2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);
    maxSubarraySum3(arr,n);
    return 0;
}


// func maxSubarraySum2 is slightly better than maxSubarraySum1.

// maxSubarraySum1 has O(n^3)
// maxSubarraySum2 has O(n^2)
// maxSubarraySum3 is based on Kadane's algo
