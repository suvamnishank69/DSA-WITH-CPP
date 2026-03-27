// Write a function to calculate the sum of dig its of a number
//my code
#include<iostream>
using namespace std;

int digSum(int n){
    int sum = 0;

    while( n > 0){
    int dig = n % 10;
    n = n/10;
    sum += dig;
}
return sum;
}

int main(){

    cout<<digSum(132)<<endl;

}


// not my 
#include<iostream>
using namespace std;

int digSum(int n){
    int res = 0;
