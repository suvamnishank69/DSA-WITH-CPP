#include<iostream>
using namespace std;

class Student {

    // properties
    //  private: // data & methods accessible inside class
    //  string name;
    
    public: // data & methods accessible everyone
    string name;
    float cgpa;

    // methods
    void getPercentsage(){
        cout<<(cgpa * 10)<< "%\n";
    }
}; 

int main() {
    Student s1;
    s1.name = "suvam"; // get some kind of error when name is in privet class
    s1.cgpa = 9.0;

    cout<< s1.name<<endl;
    cout<< s1.cgpa<<endl;
    s1.getPercentsage();
    return 0;
}