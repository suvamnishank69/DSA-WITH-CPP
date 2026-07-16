// THIS WITHOUT USING LL lib#include<iostream>
#include<vector>
#include<string>
#include<iostream>
using namespace std;

//creat a stack using linked list
template<class T>
class Node{
  public:
   T data;
   Node* next;

   Node(T val) {
      data = val;
      next = NULL;
   }
};

template<class T>
   class Stack {
      Node<T>* head;

public:
      Stack() {
         head=NULL;
      }

   void push(T val) { //0(1)
      //push-front
      Node<T>* newNode = new Node<T>(val);
      if(head  == NULL) {
         head = newNode;
      }else {
         newNode->next=head;
         head = newNode;
      }
}

   void pop() { //0(1)
      //pop-front
      Node<T>* temp = head;
      head = head->next;
      temp->next = NULL;
      delete temp;  
   }

   T top() { 
      return head->data;
   }

   bool isEmpty() { //0(1)
      return head == NULL;
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

