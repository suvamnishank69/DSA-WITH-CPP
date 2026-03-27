#include<iostream>
#include<string>
using namespace std;

// Polymorphism
// OPERATOR OVERLOADING(OO)

class print{
    public:
    void show(int x){
        cout<<"int: "<<x<<endl;
    }
    
};

class Complex{
    int real;
    int img;
    
    public:
    Complex(int r,int i){
        real = r;
        img = i;
    }
    
    void showNum(){
        cout<<real<<" + "<<img<<"i\n";
    }

    // OPERATOR OVERLOADING(OO)
    void operator - (Complex &c2){ // this is a operator funtion syntax
//                      ^     ^              
//                      |     |
//            paremeter(1),  parameter(2)
        int resReal = this->real - c2.real;
        int resImg = this->img - c2.img;
        Complex c3(resReal,resImg);
        cout << "result = " ;
        c3.showNum();
    }
};

int main(){
    Complex c1(1,2);
    Complex c2(3,4);

    c1.showNum();
    c2.showNum();

    c1 - c2;

    return 0;

}

// TRY TO UNDERSTAND THIS PART CAREFUL
// void operator - (Complex &c2){ // this is a operator funtion syntax
//         int resReal = this->real - c2.real;
//         int resImg = this->img - c2.img;
//         Complex c3(resReal,resImg);
//         cout << "result = " ;
//         c3.showNum();
//     }



