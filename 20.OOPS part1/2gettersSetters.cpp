 

#include<iostream>
#include<string>
using namespace std;

class Student {
public:
    string name;
    float cgpa;

    void getPercentage() {
        cout << (cgpa * 10) << "%\n";
    }

    // setters
    void setName(string nameVal) {
        name = nameVal;
    }

    void setCgpa(float cgpaVal) {
        cgpa = cgpaVal;
    }

    // getters
    string getName() {
        return name;
    }

    float getCgpa() {
        return cgpa;
    }
};

int main() {
    Student s1;
    s1.setName("Suvam");
    s1.setCgpa(7.6);

    cout << s1.getName() << endl;
    cout << s1.getCgpa() << endl;
    s1.getPercentage();

    return 0;
}
