#include<iostream>
#include<string>
#include<vector>
using namespace std;

void permutations(string str,string ans) {

    int n = str.size();
    if(n==0){
        cout<<ans<<"\n";
    }


    for(int i=0;i<str.size();i++) {
        char ch = str[i];
    //   to have c we have to do this
    // "abcdefgh",i = 2 => "ab"+"defgh" =>str.substr(0,i)+str.substr(i+1,n-i-1);
        string nextstr = str.substr(0,i)+str.substr(i+1,n-i-1);
        permutations( nextstr , ans + ch);
    }

}

int main(){

   string str = "abc";
   string ans = ""; //we store ans in this empty string

   permutations(str,ans);
   return 0;

}


// space complecity:  O(n)
// time complecity:  O(n!)
