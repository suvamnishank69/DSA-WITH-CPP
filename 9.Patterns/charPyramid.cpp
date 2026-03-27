// print the following
// A
// BC
// DEF
// GHIJ
#include<iostream>
using namespace std;

int main() {
    int n =4;
    char ch = 'A';

    for(int i=0;i<4;i++){
        for(int j=0;j<=i;j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
        
        
}
}



// differce b/w above  and below code ?
// both code and output diff

// #include<iostream>
// using namespace std;

// int main() {
//     int n =4;
//     char ch = 'A';

//     for(int i=0;i<4;i++){
//         for(int j=0;j<i;j++){   //it is justfor(int j=0;j<=i;j++){
//             cout<<ch;
//             ch++;
//         }
//         cout<<endl;
        
        
// }
// }

// ouput:
// A
// B,C
// D,E,F
