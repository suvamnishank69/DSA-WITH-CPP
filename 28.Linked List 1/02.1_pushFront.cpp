#include<iostream>

// add pointers  to data or int
// Node class to store data and pointer to next node
class Node{  
    public:
    
    int data;
    Node* next;

        Node(int val) {
            data = val;
            next = NULL;
        }

};

// add head and tail to a note
// List class to manage linked list using head and tail pointers
class List {
    public:
    Node* head;
    Node* tail;

        List() {
            head = NULL;
            tail = NULL;
        }
        void push_front(int val) {
            Node* newNode = new Node(val); //dynamic(new node created)
            
           if(head == NULL) {
            head = tail = newNode;
           } else{
            newNode->next = head;  //*newNode.next same as newNode->next  Connect the new node to the old first node. 
            head = newNode;
           } 
        
        }
};

int main() {

    List ll; 
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    //1->2->3->null

    return 0;

}

// can not be printed bcz dont have print function