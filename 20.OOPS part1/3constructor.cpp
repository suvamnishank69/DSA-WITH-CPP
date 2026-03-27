#include<iostream>
#include<string>
using namespace std;
class Car{
    string name;
    string color;

public:
    Car(string nameValue,string colorValue){
        cout<<"counstructor is called. object being created..\n";
        name = nameValue;
        color = colorValue;
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
    Car c1("TATA nano","yellow");
    cout<<"car name : " << c1.getName()<<endl;
    return 0;
}

//CONDTRUCTOR
// special method invoked automatically at time of object creation
// same name as class
// doesnot have return type