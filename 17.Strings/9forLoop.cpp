#include<iostream>
using namespace std;

int main(){
    string str = "hello world";

    // type-1
    // for(int i=0;i<str.length();i++){
    //     cout<<str[i]<<"-";
    // } cout<<"\n";

    // TYPR-2
    for(char ch :str ){
        cout<<ch<<" , ";
    }
    cout<<endl;
    return 0;
}