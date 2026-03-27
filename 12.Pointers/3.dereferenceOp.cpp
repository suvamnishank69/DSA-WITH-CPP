#include<iostream>
using namespace std;

int main(){
    // int a = 10;

    // cout<<&a<<"\n";
    // cout<<*(&a)<<"\n"; //dereference operator

    int a = 10;
    int *ptr = &a;

      cout<<ptr<<"\n";
      cout<<*ptr<<"\n";

      *ptr = 20;  //dereference op
      cout << a << "\n"; //change the value of a from 10 to 20

      return 0;

    


}