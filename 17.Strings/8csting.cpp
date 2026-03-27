#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str1[100];
    char str2[100] = "hello world"; 
    // strcat(str1,str2); // concatenate str1 + str2
    
    // strcmp(str1,str2); // compares 2 strings based on values (-ve,0,+ve)
    // zero means both are same
    // -ve means  str1 is small
    // +ve means  str2 is small
    // no connection with length od array
    
    strcpy(str1,str2);  // strcpy is use to or copy one string  to other string
    cout<<str1<<endl;
    return 0;
}
