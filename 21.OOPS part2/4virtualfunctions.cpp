#include<iostream>
#include<string>
using namespace std;

// FUNCTION OVERRIDING

class Parent{
    public:
    void show(){
        cout<<"parent class show ..\n";
    }

    virtual void hello(){
        cout<<"parent hello";
    }
};

class Child : public Parent {
    public: 
    void show(){
        cout<<"child class show..\n";
    }
            void hello(){  // dont need to write virtual again
        cout<<"child hello";
    }
};

int main(){

Child child1;
Parent *ptr;

ptr = &child1; //Run time  Binding
ptr->hello();

return 0;

}

// IN VIRTUAL FUNCTION 
// child >> inheritance
// if both have same function