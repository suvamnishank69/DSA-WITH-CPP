// waf to print the factorial of a number n.
#include<iostream>
using namespace std;

int factorial(int n){
int fact = 1;
for(int i=1;i<=n;i++){
fact = fact*i;
}
cout<<"factorial of : "<< n << " "<< "is \n"<<fact<<endl;
return fact;
}



    

int main(){
    int n;
    cout<<"enter a number \n";
    cin>>n;

    int fact = factorial(n);
    

}