// using vector to creat stack

// use array to creat satck as    homework

#include<iostream>
#include<vector>
using namespace std;

//creat Stack using vector
class Stack{
vector<int> vec;
public:
   void push(int val) { //0(1)
      vec.push_back(val);
}

   void pop() { //0(1)
      if(isEmpty()) {
         cout<<"Stack is empty.\n";
         return;
      }
      vec.pop_back();   
   }
   int top() { //0(1)   return thr top element
      if(isEmpty()) {
         cout<<"Stack is empty.\n";
         return -1;
      }

         int lastIdx = vec.size()-1;
      return vec[lastIdx];
   }

   bool isEmpty() { //0(1)
      return vec.size() == 0;
   }
};


int main() {
    Stack s;

   s.push(4); //this push at first
   s.push(3);
   s.push(2);
   s.push(1);
   

   while(!s.isEmpty()) {
      cout<<s.top()<<" ";
      s.pop();
   }
    return 0;
}