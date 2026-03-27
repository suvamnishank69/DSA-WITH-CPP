// //single inheritance

// #include<iostream>
// #include<string>
// using namespace std;

// class Animal {
//     public: string color;

//     void eat(){
//         cout<<"eats\n";
//     }

//     void breathe(){
//         cout<<"breathes\n";
//     }
// };

// //single inheritance
// class Fish : public Animal { // syntax  for INHERTANCE  (CHILD class:PARENT class); public-> is a access modifer 
//     public: 
//     int fins;

//     void swim(){
//         cout<<" can swim\n";

//     }
// };


// int main(){
//     Fish f1;
//     f1.fins = 4;
//     cout<<f1.fins<<"\n";
//     f1.eat();
//     f1.breathe();
//     f1.swim();

//     return 0;
// }


// 2.MULTI-LEVLE inheritance
// #include<iostream>
// #include<string>
// using namespace std;

// class Animal {
//     public: string color;

//     void eat(){
//         cout<<"eats\n";
//     }

//     void breathe(){
//         cout<<"breathes\n";
//     }
// };

// class Mammal : public Animal { // syntax  for INHERTANCE  (CHILD class:PARENT class); public-> is a access modifer 
//     public: 
//         string bloodType;

//         Mammal(){
//             bloodType = "warm";
//         }

// };

// class Dog:public Mammal { // Multi_level Inheritance -- Mammal inheritated properties from Animal
//     public:
//     void taiWag(){
//         cout<<" adog wags its tail\n";
//     }
// };

// int main(){
//     Dog d1;

//     d1.eat();
//     d1.breathe();
//     d1.taiWag();
//     cout <<"Blod type of dog: "<< d1.bloodType<<"\n";

//     return 0;
// }


// MULTIPLE INHERTANCE
#include<iostream>
#include<string>
using namespace std;

class Tearcher{
    public:
    int salary;
    string subject;
};

class Student{
    public:
        int rollno;
        float cgpa; 
};

class TA:public Tearcher,public Student{ //MULTIPLE INHERITANCE
   public:
    string name;
}; 

int main(){
    TA ta1;
    ta1.name = "Suvam Nishank";
    ta1.subject = " c++";
    ta1.cgpa = 9.1;

    cout<<ta1.name<<"\n";
    cout<<ta1.subject <<"\n";
    cout<<ta1.cgpa<<"\n";

  
}



// <read about it>
// type of inheritance
// 1.Single inheritance
// 2.Multi-level inheritance
// 3.multiple inheritance
// 4.hierachial inheritance
// 5.hybride inheritance
