#include<iostream>
using namespace std;

class Node{  
    public:
    
    int data;
    Node* next;

        Node(int val) {
            data = val;
            next = NULL;
        }

};

class List {
    public:
    Node* head;
    Node* tail;

        List() {
            head = NULL;
            tail = NULL;
        }

        void push_front(int val) {
            Node* newNode = new Node(val); 
            
           if(head == NULL) {
            head = tail = newNode;
           } else{
            newNode->next = head;  
            head = newNode;
           } 
        }
        
        void pop_front() {
    if(head == NULL) {
        cout<<"LL is empty\n";
        return;

    }

    Node* temp = head;
    head = head ->next;


    temp ->next =NULL;
    delete temp;
 }
       
         void printList(Node* head) {
            Node* temp = head;
            while (temp != NULL) {
                cout<<temp->data<<"->";
                temp = temp->next;
            }
          
            cout<<"NULL\n";
         }

           bool isCycle(Node* head) {
            Node* slow = head;
            Node* fast = head;

            while(fast != NULL && fast->next != NULL) {
                slow = slow->next; //+1
                fast = fast->next->next;  //+2

                if(slow==fast) {
                    cout<<"cycle exists\n";
                    return true;
                }
            }
            cout<<"cycle does not exists";
            return false;
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

         void removeCycle(Node* head) {
            //detect cycle
            Node* slow = head;
            Node* fast = head;
            bool isCycle = false;

            while(fast != NULL && fast->next != NULL) {
                slow = slow->next; //+1
                fast = fast->next->next;  //+2

                if(slow==fast) {
                    cout<<"cycle exists\n";
                    isCycle = true;
                    break;
                }
            }
            
            if(!isCycle) {
                cout<<"cycle doesn't exist/n";
                return;
            }
            slow = head;
            if(slow == fast) { //special case:tail->head (when both tail and head is at first node)
                
                while(fast->next != slow) {
                    fast = fast->next;
                }
                fast->next=NULL; //remove cycle


            }else{
                Node* prev = fast;
                while(slow != fast) {
                    slow = slow->next;
                    prev = fast;
                    fast = fast->next;
                }
                prev->next=NULL; //remove cycle
            }
            
         }
         
         Node*splitAtMid(Node* head) {
            Node* slow = head;
            Node* fast = head;
            Node* prev = NULL;
  
            while(fast != NULL && fast->next != NULL) {
                prev = slow;
                slow = slow->next;
                fast = fast->next->next;
            }

            if(prev != NULL) {
                prev->next = NULL;  //split at middle

            }
            return slow;
        }
        Node* merge(Node* left, Node* right) {

    List ans;
    Node* i = left;
    Node* j = right;

    while(i != NULL && j != NULL) {
        if(i->data <= j->data) {
            ans.push_back(i->data);
            i = i->next;
        } else {
            ans.push_back(j->data);
            j = j->next;
        }
    }

    while(i != NULL) {
        ans.push_back(i->data);
        i = i->next;
    }

    while(j != NULL) {
        ans.push_back(j->data);
        j = j->next;
    }

    return ans.head;
}   

void reverse() {
    Node* curr = head;
    Node* prev = NULL;

    while(curr != NULL) {
        Node* next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;
    }

    head = prev;
}

         Node* mergeSort(Node* head) {
            if(head == NULL || head->next == NULL) {
                return head;
            }
            Node* rightHead= splitAtMid(head);

            Node* left = mergeSort(head);//left Head
            Node* right = mergeSort(rightHead);//right Head
            

            return merge(left,right); //head of sorted LL

         }

         Node* reverse(Node* head) {
            Node* prev=NULL;
            Node* curr=head;
            Node* next=NULL;

            while(curr != NULL) {
                next=curr->next;
                curr->next = prev;

                prev = curr;
                curr = next;
            }

            return prev; //prev is head of reversed LL
         }

         Node* zigzag(Node* head) {

            Node* rightHead = splitAtMid(head);
            Node* rightHeadRev = reverse(rightHead);
         
            //alternate merging
             Node* left = head;
             Node* right = rightHeadRev;
             Node *tail = right;

             while(left != NULL && right != NULL) {
                Node* nextLeft = left->next;
                Node* nextRight = right->next;

                left->next = right;
                right->next = nextLeft;

                tail = right;

                left=nextLeft;
                right=nextRight;

             }


             if(right != NULL) {
                tail->next = right;
             }

             return head;
            }
};

int main() {
    List ll;

    ll.push_front(7);
    ll.push_front(6);
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
 
    ll.printList(ll.head);
    
    ll.zigzag(ll.head);

    ll.printList(ll.head);

    return 0;

}



 