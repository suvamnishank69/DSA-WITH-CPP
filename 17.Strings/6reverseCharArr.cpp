#include<iostream>
#include <cstring>  // use for strlen(word)
using namespace std;

void reverse(char word[],int n){
    int st = 0,end = n-1;
    while(st<end){
        swap(word[st],word[end]);
        st++;
        end--;
        // swap(word[st++],word[end--])  -- do same thing as above 3 line
    }
}

int main(){
    char word[] = "code";
    reverse(word,strlen(word)); // strlen(word) -> use to calculate the lenth of word
    cout<<" reverse = "<< word << endl;
    return 0;
}