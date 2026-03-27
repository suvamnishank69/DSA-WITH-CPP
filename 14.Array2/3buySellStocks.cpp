// You are given an array prices where prices[i] is the price of a given stock on the ith day.
// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

#include<iostream>
using namespace std;
#include <climits> // this code is written bcz of for C++: INT_MIN, INT_MAX

void maxProfit(int*price,int n){
    // int bestBuy[n]; not possible (c++) in function dynamic sizing
    int bestBuy[10000]; // q constrents
    bestBuy[0]=INT_MAX; // value of first index
    for(int i=1; i<n;i++){
        bestBuy[i] = min(bestBuy[i-1],price[i-1]); //min - find the min from A and B
    }

    int maxProfit = 0 ;
    for(int i=1;i<n;i++) {
        int currProfit = price[i] - bestBuy[i];
        maxProfit = max(maxProfit,currProfit);
        // cout<<bestBuy[i]<<",";


    }
  
    cout<<"max profit = "<<maxProfit<<endl;

}



int main(){
    int prices[6]={7,1,5,3,6,4};
     int n = sizeof(prices)/sizeof(int);
    

     maxProfit(prices,n);


    return 0;

}