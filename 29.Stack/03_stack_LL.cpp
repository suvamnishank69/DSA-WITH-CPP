#include<iostream>
#include<vector>
#include<string>
#include<list>
using namespace std;


template<class T>
class Stack{
list<T>ll;

public:
   void push(T val) { //0(1)
      ll.push_front(val);
}

   void pop() { //0(1)
      ll.pop_front();  
   }

   T top() { 
      return ll.front();
   }

   bool isEmpty() { //0(1)
      return ll.size() == 0;
   }
};


int main() {

   Stack<int>s;
   s.push(3);
   s.push(2);
   s.push(1);

   while(!s.isEmpty()) {
      cout<<s.top()<<" ";
      s.pop();
   }
   cout<<endl;
    return 0;
}

