// Static Object
#include<iostream>
#include<string>
using namespace std;

class Example{
    public:
        Example(){
            cout<<"constructor"<<"\n";
        }

        ~Example(){
            cout<<"deconstructor"<<"\n";
        }

};



int main(){
   int a = 0;
   if(a == 0) {
     static Example eg1;
   }

   cout<< "code ending..\n";
    return 0;
}


// output of Example differ  if (stacic) keyword is not present