#include<vector>
#include<string>
#include<iostream>
#include<stack>
using namespace std;

int main() {

   stack<int>s; //here stack start with small letter bcz we are using  STL lib
   s.push(3);
   s.push(2);
   s.push(1);

   while(!s.empty()) {
      cout<<s.top()<<" ";
      s.pop();
   }
   cout<<endl;
    return 0;
}

