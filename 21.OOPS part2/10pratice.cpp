// IMP Q to understand relestion b/w parent and class
// find the output
#include<iostream>
#include<string>
using namespace std;

class A{//parent class
    public:
    A(){
        cout<<"Constructor A"<<endl; 
    }
    ~A(){
        cout<<"Destuctor A"<<endl;
    }
};

class B:public A{ //child class
    public:
    B(){
        cout<<"Constructor B"<<endl;
    }
    ~B(){
        cout<<"Destuctor B"<<endl;
    }

};

int main(){
    B obj;

    return 0;
}





// I find  wrong output
// my ans - Constructor B
//          Destuctor   B
//          Constructor A
//          Destuctor   A
// its wr1ong


// Answer logic
// child class;(IN case of construtor)
// 1->parent constrctor(parent constrctor get more importance before child )
// 2->child constructor

// IN case of DIsconstrutor
// 1->child(child class get more importance )
// 2->parent
// ANS
//  ^
//  |
// Constructor A
// Constructor B
// Destuctor B
// Destuctor A
