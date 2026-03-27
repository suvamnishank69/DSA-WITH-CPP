#include<iostream>
#include<string>
using namespace std;

class Car{
    public:
    string name;
    string color;

       // Constructor
    Car(string name, string color) {
        this->name = name;
        this->color = color;
    }

    Car(Car &original){
        cout<<"copying original to new..\n";
        name = original.name;
        color = original.color;
    }
};


int main(){
    Car c1("omine van","white");

    Car c2(c1);
    cout<<"car name : "<<c2.name<<endl;;
    cout<<"car color : "<<c2.color<<endl;;

    return 0;
}

