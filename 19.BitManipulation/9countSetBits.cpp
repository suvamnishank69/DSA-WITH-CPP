#include<iostream>
using namespace std;

int countSetBit(int num){
    int count = 0;

    while(num >  0) {
        int lastDig = num & 1;
        count += lastDig;

        num = num >>1;
} 
    cout<< count << endl;
}

int main() {

    countSetBit(10);
        return 0;
    
}