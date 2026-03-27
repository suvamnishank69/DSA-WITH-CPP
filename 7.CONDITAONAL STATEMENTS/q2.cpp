#include<iostream>
using namespace std;

int main(){
    int income;
    float tax;
    cout<<"print you anual income in (lash)";
    cin>>income;

    if(income < 5){
        tax =0;
    }else if(income <= 10){
        tax = 0.2 * income;
    }else{
        tax = 0.3 * income;
    }

    cout << "TAX = "<<(tax * 100000) << endl;
    return 0;
}