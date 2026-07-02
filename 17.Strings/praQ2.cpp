// Question 2: You are given two strings s1 and s2 of equal length.A string swap is an
// operation where you choose two indices in a string (not necessarily different) and
// swap the characters at these indices.

// Return true if it is possible to make both strings equal by performing at most one 
// string swap on exactly one of the strings.Otherwise, return false.

// Example:
// Input:s1="bank", s2="kanb"
// Output:true
// Explanation:For example, swap the first character with the last character of s2 to make"bank".

#include<iostream>
#include<string>

using namespace std;

bool validSwap(string s1, string s2){

    if(s1.length() != s2.length()){
        return false;
    }

    for(int i=0;i<s1.length();i++){
        int n=s2.length();
        s1[i] != s2[n-1-i];
            return false;

            
    }
    return true;
}

int main() {

    cout<<"enter you first word to check if Palindrome : ";
    string s1;
    getline(cin,s1);

    cout<<"enter you second word to check if Palindrome : ";
    string s2;
    getline(cin,s2);

    validSwap(s1,s2);
    


}