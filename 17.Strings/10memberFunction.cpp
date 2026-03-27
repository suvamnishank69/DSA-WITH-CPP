#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "I Love codeing  gaming yt creation ";

    cout<<str.substr(1,10)<<endl;  //only print a part of string(starting,size)
     cout<<str.find("yt")<<endl;  //find the index number at which the word it find .if it return(-1) then there is no word such like that  
    return 0;

}