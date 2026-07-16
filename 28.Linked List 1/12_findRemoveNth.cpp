// amazon
// flipkart
// adobe 
// qualcomm



#include<iostream>
using namespace std;

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
            newNode->next = head;    //*newNode.next same as newNode->next 
            head = newNode;
           } 
        
        }
        
         void printList() {
            Node* temp = head;
            
            while (temp != NULL) {
                cout<<temp->data<<"-> ";
                temp = temp->next;
            }
          
            cout<<"null\n";
         }

         void insert(int val,int pos) {
    Node* newNode = new Node(val);

    Node* temp = head;
    for(int i=0;i<pos-1;i++) {
        if(temp == NULL) {
            cout<<"postion is INVALID\n";
            return;
        }
        temp = temp->next;
    }
    //temp is now at pos-1 i.e pre/left
    newNode->next = temp->next;
    temp->next = newNode;
 }

 int getsize() {
    int sz=0;
    Node* temp=head;

    while(temp != NULL) {
        temp = temp->next;
        sz++;
    }
    return sz;
 }

void removeNth(int n) {
    int size = getsize();
    Node* prev = head;

    for(int i=1;i<(size-n);i++) {
        prev = prev->next;
    }

    Node* toDel = prev->next;
    cout<<"going to delete : "<<toDel->data<<endl;

    prev->next = prev->next->next;
}


};


int main() {

    List ll; 

   
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    
    ll.printList();
    
    
    ll.removeNth(2);
    ll.printList();

    return 0;

}