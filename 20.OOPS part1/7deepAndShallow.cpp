#include<iostream>
#include<string>
using namespace std;

class Car{
    public:
    string name;
    string color;
    int *mileage;

       // Constructor
    Car(string name, string color) {
        this->name = name;
        this->color = color;
        mileage = new int;  //dynamic allocation 
        *mileage = 12;
    
    }

    Car(Car &original){
        cout<<"copying original to new..\n";
        name = original.name;
        color = original.color;
        mileage = original.mileage;
    }
};


int main(){
    Car c1("omine van","white");

    Car c2(c1);
    cout<<"car name : "<<c2.name<<endl;
    cout<<"car color : "<<c2.color<<endl;
    cout<<"car mileage : "<<*c2.mileage<<endl;
    *c2.mileage = 10;

    cout<<"car mileage after updating *c2 : "<<*c1.mileage<<endl; //10  

    return 0;
}

