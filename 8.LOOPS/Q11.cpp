// check if a number is prime or not
//my code workd but not a great one i think
// and took some help in syntax not in logic
// #include<iostream>
// using namespace std;

// int main() {
//     int a;
//     cout<<"enter a number "<<endl;
//     cin>>a;

//     for(int x=2;x<=a-1;x++){
//         if(a%x != 0){
//             cout<<"prime"<<endl;
//             break;

//         }else{
//         }
        
//         cout<<"compostite"<<endl;
//         break;
//     }

// }

// mam code

// #include<iostream>
// using namespace std;

// int main() {
//     int n = 13;
//     bool isPrime = true; // why it is being used

//     for(int i=2; i<=n;i++){
//         if(n%i == 0){
//             isPrime = false;
//             break;
//         }
//     }
//     if(isPrime) {
//         cout<<"number is prime"<<endl;
//     }else{
//         cout <<"number is not prime"<<endl;
//     }
//     return 0;
// }

// 2nd method: to reduce the run time

// less loop runs
//shorten the given number
// overroot number = value (overroot 21 = 4.5826)
// div the number by value(if the value = 4 ,div it by 2,3, till 4 ,don't to exceed above the the value )

#include<iostream>
#include<cmath> //math
using namespace std;

int main() {
    int n = 7;
    bool isPrime = true;

    for(int i=2; i<=sqrt(n); i++) {
            if(n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if(isPrime) {
        cout<<"number is prime"<<endl;
    } else {
        cout <<"number is not prime"<<endl;
    }
    return 0;
}
