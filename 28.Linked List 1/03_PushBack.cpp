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
        
        void push_back(int val) {
            Node* newNode = new Node (val);
            
            if(head == NULL) {
                head=tail=newNode;
            }else{
                tail->next = newNode;
                tail = newNode;
            }
        }
};

int main() {

    List ll; 
    ll.push_back(3);
    ll.push_back(2);
    ll.push_back(1);

    //1->2->3->null
 
    return 0;

}