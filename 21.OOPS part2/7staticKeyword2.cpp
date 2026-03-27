// Static Variables in Class
#include<iostream>
#include<string>
using namespace std;

class Example{
    public:
        static int x;

};

int Example::x = 0;  //static variable in a class

int main(){
    Example eg1;    
    Example eg2;    
    Example eg3;
  
    
    cout<<eg1.x++<<"\n";
    cout<<eg2.x++<<"\n";
    cout<<eg3.x++<<"\n";

    return 0;
}
