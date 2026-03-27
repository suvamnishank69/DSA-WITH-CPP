#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter a number"<<endl;
    cin>>a;

    if(a<0){
        cout<<a<<"is negative"<<endl;
    }else if(a>0){
    cout<<a<<"is postive"<<endl;
    }else{
        cout<<"it is zero";
    }

}