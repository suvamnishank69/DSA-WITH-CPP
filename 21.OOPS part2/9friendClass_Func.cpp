#include<iostream>
#include<string>
using namespace std;

class A{
    string secret = "secret data : FU*K U";
    friend class B; // now A becomes a friend of B (B has it's all information)
    friend void revealSecret(A &obj);
};
// friend class
class B{ //A becomes a friend of class A
    public:
    void showSecret( A &obj){
        cout<<obj.secret<<endl;

    }
    
};

//friend func
void revealSecret(A &obj) {
    cout<<obj.secret<<endl;
}

int main(){
    A a1;
    B b1;

    b1.showSecret(a1);
    revealSecret(a1);
    return 0;

}

// in this class B has all data about class A
// but reverse is not true

// A friend class in C++ is a class that is granted special permission to access
// the private and protected members of another class in which it is declared as a friend.