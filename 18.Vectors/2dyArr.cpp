#include<iostream>
using namespace std;

void funcInt(){
    // it imp to use (new & delete) in dy memory allocation

    int *ptr = new int;
    *ptr = 5;

    cout<< *ptr;

    delete ptr;
}

int main(){

    funcInt();

    return 0;
}