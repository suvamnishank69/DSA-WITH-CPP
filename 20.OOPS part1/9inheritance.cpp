#include<iostream>
#include<string>
using namespace std;

class Animal {
    public: string color;

    void eat(){
        cout<<"eats\n";
    }

    void breathe(){
        cout<<"breathes\n";
    }
};

class Fish : public Animal { // syntax  for INHERTANCE  (CHILD class:PARENT class); public-> is a access modifer 
    public: 
    int fins;

    void swim(){
        cout<<" can swim\n";

    }
};


int main(){
    Fish f1;
    f1.fins = 4;
    cout<<f1.fins<<"\n";
    f1.eat();
    f1.breathe();
    f1.swim();



    return 0;
}


// <Read about this>
// Modes of Inheritance
// 1.public - accesable
// 2.protected - can be accesable by derived class
// 3.private - can not be inheritable or acceseceble by other class