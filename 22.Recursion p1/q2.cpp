// We are given a string S, we need to find the count of all contiguous substrings starting and ending with 
// the same character.[LeetcodePremiumQs]
// Sample Input 1 : S ="abcab"
// Sample Output 1 : 7 There are 15 substrings of "abcab" : a, ab ,abc,abca,abcab,b,bc,bca,bcab,c,ca,cab,a,ab,b.
// Out of the above substrings , there are 7 substrings:a,abca,b,bcab,c,a and b.So,only 7 contiguous substrings start and end with the same character.
// Sample Input 2 : S ="aba"
// Sample Output 2: 4 
// The substrings are a,b,a and aba

#include<iostream>
using namespace std;

int validSubstr(string s) {
    int n = s.size();

    if(n == 1){
        return 1;

    }

    int count = 0;
    if(s[0] == s[n-1]) { //idx
        count++;
    }
    count += validSubstr(s.substr(0,n-1)); //   substract last element
    
    count += validSubstr(s.substr(1)); // exclude first element
    
    count += validSubstr(s.substr(1,n-2)); //for del repeated substring

    return count;
}

int main() {
    string s ="abcd"; 
    int count = validSubstr(s);

    cout<<count;
    return 0;
}
