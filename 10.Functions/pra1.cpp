// waf to find the product of a,b;
#include<iostream>
using namespace std;

int product(int a,int b){
    int pro = a*b;
    return pro;
}

int main(){

    int pro = product(3,5);
    cout<<pro<<endl;

    return 0;


}