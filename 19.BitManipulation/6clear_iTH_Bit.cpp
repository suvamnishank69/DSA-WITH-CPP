// convert ith bit to 0
#include<iostream>
using namespace std;

int clearIthBit(int num, int i){
    int bitMask = ~(1 << i);
    return num & bitMask;
}

int main() {
    cout<<clearIthBit(6, 1) << endl;
    return 0;
} 