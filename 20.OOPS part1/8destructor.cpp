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
    ~Car(){
        cout<<" deleting object..\n";
        if(mileage != NULL){
            delete mileage; // delete to delete a data
            mileage = NULL; // mileage may store garbage so we need to assine a (null) value 
            cout<<" deleted\n";
        }
    }
};


int main(){
    Car c1("omine van","white");
    cout<<"car name : "<<c1.name<<endl;
    cout<<"car color : "<<c1.color<<endl;
    cout<<"car mileage : "<<*c1.mileage<<endl;
    



    return 0;
}

