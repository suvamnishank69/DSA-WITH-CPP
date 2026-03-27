// print the following
// 1
// 12
// 123
// 1234
#include<iostream>
using namespace std;

int main() {
    for(int i=0;i<4;i++){
        int num = 1;
        for(int j=0;j<i;j++){
            cout<<num;
            num++;
    }
    cout<<endl;

}
}