#include<iostream>
#include<string>
using namespace std;

// Polymorphism
// FUNCTION OVERLOADING(FO)

class print{
public:
        void show(int x){
            cout<<"int: "<<x<<endl;
        }
        void show(string str){
            cout<<"string: "<<str<<endl; 
        }
};

int main(){
    print obj1;
    obj1.show(18);
    obj1.show("Suvam");


    return 0;

}