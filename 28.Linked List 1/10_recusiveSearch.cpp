// RECURSIVE  SEARCH
// search key

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

        // ~Node() {
        //     if(next != NULL) {
        //         cout<<"~Node "<< data<<endl;
        //         delete next;
        //         next = NULL; 
        //     }
        // }

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
        
        // ~List() {
        //     cout<<"\n";
        //     cout<<"~List\n";
        //     if(head!= NULL) {
        //         delete head;
        //         head = NULL;
        //     }
        // }

        void push_back(int val) {
            Node* newNode = new Node (val);
            
            if(head == NULL) {
                head=tail=newNode;
            }else{
                tail->next = newNode;
                tail = newNode;
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

int helper(Node* head,int key) { //here head is not likend list head it is a local variable head
    if(head==NULL) {
        return -1;
    }

    if(head->data == key) {
        return 0;
    }

    int idx = helper(head->next,key);
    if(idx==-1) {
        return -1;
    }

    return idx+1;
}
 int searchRec(int key) {
    return helper(head,key);
 }
 
};


int main() {

    List ll; 

   
    ll.push_back(5);
    ll.push_back(4);
    ll.push_back(3);
    ll.push_back(2);
    ll.push_back(1);
    ll.printList();
    
   
    cout<<ll.searchRec(2)<<endl;
    //1->2->3->null
 
    return 0;

}