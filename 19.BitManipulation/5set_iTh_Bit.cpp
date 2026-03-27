// convert each bit
// 1 -> 0
// 0 -> 1
// or operator is used here with left shift 
#include<iostream>
using namespace std;

int setIthBit(int num, int i){
    int bitMask = 1 << i;
    return(num | bitMask);
}

int main() {
    cout<<setIthBit(6,3) << endl;
    return 0;
} 