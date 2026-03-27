// print this patterns
// 1111
// 2222
// 3333
// 4444

// //mt code
// #include<iostream>
// using namespace std;

// int main () {
//     int i,j;
//     int n = 4;
//     int num = 1;
    
//     for(i=0;i<n;i++){
//         for (j=0;j<n;j++) {
//             cout<<num;
//         }
//         cout<<endl;
//         num++;
//     }
// }

//other way by mam

#include<iostream>
using namespace std;

int main () {
int n =4;
//outer loop
for(int i=1;i<=n;i++){
    // inner loop
    for(int j=1;j<=n;j++){
        //work
        cout<<i<<" ";
    }
    cout<<endl;
}
}