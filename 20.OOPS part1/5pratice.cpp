//Q-Create a User class with properties : id(privete),username(public) & password(privet).
//its id should be initalized in a parameterised constructor.
// it should have a Getter & Setter for password.
#include<iostream>
#include<string>
using namespace std;

class User{
private:
    int id;
    string password;

public:
    string username;

    User(int id) {
        this->id = id;
      // ^           ^
      // |           |
//    object id    parameter     
    }
    //getter
    string getPassword(){
        return password;
    }
    // setter
    void setPassword(string password) {
        this->password = password;
    }
};


int main(){
    User user1(101);
    user1.username = ("SUVAM");
    user1.setPassword("nishank62");

    cout<<"username : "<< user1.username<<endl;
    cout<<"password : "<< user1.getPassword()<<endl;

    return 0;

}