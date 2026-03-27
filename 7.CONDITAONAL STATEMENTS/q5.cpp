#include<iostream>
using namespace std;

int main(){
   int n, dig1,dig2,dig3;
   cout <<"enter a 3 digit number :";
   cin>>n;

   int num = n;
   dig1 = num  % 10;
   num = num /10;
   
   dig2 = num % 10;
   num = num /10;
   
   dig3 = num % 10;
   num = num /10;

   int cube = dig1*dig1*dig1 + dig2*dig2*dig2 + dig3*dig3*dig3;

   if(cube == n){
    cout<<n<<"this is a arestrong number"<<endl;
} else {
    cout<<n<<"this is a not arestrong number"<<endl;
   }

    

    
}