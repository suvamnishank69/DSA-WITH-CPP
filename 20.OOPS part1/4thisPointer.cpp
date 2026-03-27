#include<iostream>
#include<string>
using namespace std;
class Car{
    string name;
    string color;

public:
    Car(){ //non parametrized constructor
        cout<<"construtor without params\n";
    }

    Car(string name,string color){ //parametrized constructor
        cout<<"counstructor with params\n";
        this->name = name;
        this->color = color;
    }


    void start(){
        cout<<"car has started..";
    }
    void   stop(){
        cout<<"car has stop..";
    }

    //Getter
    string getName() {
        return name;
    }
};


int main(){
    Car c0;
    Car c1("TATA nano","yellow");
    cout<<"car name : " << c1.getName()<<endl;
    return 0;
}
