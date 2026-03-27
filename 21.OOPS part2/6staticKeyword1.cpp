// Static Variables in Function
#include<iostream>
#include<string>
using namespace std;

void counter(){
   static int counter = 0;
    counter++;
    cout<<"counter : "<<counter<<"\n";
}

int main(){
    counter();
    counter();
    counter();
    
    return 0;
}

// KEYWORD (STATIC:variables declared as static in a func are created & initialised onces for the lifetime of program)
// if you remove static(keyword) it may change its meaning 