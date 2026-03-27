//write a function to check if a number is a palindrome in c++.

#include<iostream>
using namespace std;

int reverse(int n){
    int res = 0;
    while( n > 0){
        int lastdig = n % 10;
        res = res * 10 + lastdig;
        n = n/10 ;
    }
    return res;
}

bool isPalindrome(int num){
    int revNum = reverse(num);
    return num == revNum;
}

int main(){

    cout<<isPalindrome(323)<<endl;


}

// if ans is zero then the value you enter is not a Palindrome
// if ans you 1 then the value you enter is a palindrome