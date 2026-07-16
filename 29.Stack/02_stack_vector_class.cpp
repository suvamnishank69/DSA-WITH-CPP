// Stack using vector with class template
#include<iostream>
#include<vector>
using namespace std;


template<class T>
class Stack{
vector<int> vec;
public:
   void push(T val) { //0(1)
      vec.push_back(val);
}

   void pop() { //0(1)
      if(isEmpty()) {
         cout<<"Stack is empty.\n";
         return;
      }
      vec.pop_back();   
   }

   T top() { //0(1)   return thr top element
    //   if(isEmpty()) {
    //      cout<<"Stack is empty.\n";
    //      return -1;
    //   }

         int lastIdx = vec.size()-1;
      return vec[lastIdx];
   }

   bool isEmpty() { //0(1)
      return vec.size() == 0;
   }
};


int main() {
//     Stack<int>s;

//    s.push(4); //this push at first
//    s.push(3);
//    s.push(2);
//    s.push(1);
   Stack<char>s;
   s.push('c');
   s.push('b');
   s.push('a');

   while(!s.isEmpty()) {
      cout<<s.top()<<" ";
      s.pop();
   }
   cout<<endl;
    return 0;
}



// by this class templete we can chage the 
// Stack<char>s;and then is a  char stack
// Stack<int>s; and then is a  int stack


