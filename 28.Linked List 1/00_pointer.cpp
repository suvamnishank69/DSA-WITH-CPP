// READ POINTER BEFORE LINKED LIST

#include<iostream>
using namespace std;

int main() {
    int x = 5;
    int* p = &x;

    cout << x << endl;    // 5
    cout << p << endl;    // address 0x61ff08
    cout << *p << endl;   // 5
}

// here (&) gives a address to x (0x61ff08);
// * p shows the value of x by seaching though address(0x61ff08)


// step-1
// (* p) search the address(0x61ff08)

// step-2
// address(0x61ff08) check what value it has e.g- here (5) 
// and return

// step-3
// value return to (* p) so
// (* p) = 5