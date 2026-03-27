//sum of n=10829
#include<iostream>
using namespace std;

int main (){
    int n =10829;
   int digSum = 0;

   while (n > 0)
   {
    int lastDig = n % 10;
    digSum = digSum+ lastDig;
    n = n/10;
   }
   
   cout<<digSum<<endl;
   return 0;

}

// try it again in every possible loop

// if you want the access of any last digit a number use ( number % 10)
// if you want the access of any number without last digit use ( number / 10)
