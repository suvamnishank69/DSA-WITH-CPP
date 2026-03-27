//  check prime or not prime

// my code not working
// #include<iostream>
// using namespace std;

// int primeOrNot(int a){


//     for(int i = 2;i<a;i++){
//         if(a % i == 0){
//             cout<<"not a prime";
//         }else{
//             cout<<"prime";
//         }

//     }
// }

// int main(){

//     int check = primeOrNot(15);
//     cout<<check<<endl;


// } 

#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n == 1 ){
        return false;
    }
    for(int i=2; i*i<=n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
// we are using overroot method here 



int main(){
    cout<<isPrime(3)<<endl;
    return 0;

}

