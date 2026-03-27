#include<iostream>
using namespace std;

int main(){
    // int marks[50]; //cerat a array in memeory of 50 integers from (0 to 49 index value).
    int marks[] = {1,2,3};
    cout<< marks[0]<<"\n";
    cout<< marks[1]<<"\n";
    cout<< marks[2]<<"\n";
    cout<< marks[3]<<"\n";
    // cout<< marks[50]<<"\n";  show error becz it has only 49 index 
    return 0;
}