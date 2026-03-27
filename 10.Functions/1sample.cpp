#include<iostream>
using namespace std;

void greet(){
    cout<<"Hello bro \n";

}

void assistant(){
    greet();
    cout<<"workdone \n";
}
int sum(int a,int b){  //a,b are parameters
// int sum(int a,int b=1){  //defult value of b i=1 if only one value is get entered by user
    int sum = a+b;
    return sum;
}

int main(){

    // greet();
    // assistant();
    int s = sum(2,3); //2,3 are arguments
    cout<<"sum = "<< s <<endl;
    return 0;

}