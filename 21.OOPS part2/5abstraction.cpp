#include<iostream>
#include<string>
using namespace std;

//abstract class
class Shape{
    public:
        virtual void draw() = 0 ;// abstract fnx,pure virtual funtion
};

class Circle : public Shape{
    public:
    void draw(){
        cout<<"Cricle Square\n";
    }
};

class Square : public Shape{
    public:
    void draw(){
        cout<<"draw Square\n";
    }
};

int main(){
    Circle cir1;
    cir1.draw();

    Square squ1;
    squ1.draw();

    // Shape s1; // don't gonna work 
    // s1.draw();

    return 0;
}




// abstract classes are used to provide a base class from which other classes can be derive
// they can ot be instantiated ans]d meant to be in herited
// Abstract classes are typically used to define an interface for derived classes 


//live class 16,17