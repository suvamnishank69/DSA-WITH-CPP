// LIST IN STL
// 1.push_front(val) & push_back(val)
//2.size()
//3.front() & back()  here front() use for show value of thas that allow you to travt position  
//4.pop_front() & pop_back()

// iterator in c++are objecterse though 
// the elements of a container (like arrays,vector,list,etc.) in a sequental manner

//include<i terator> give us 2 things   1.  ll.begins() 2.  ll.end()

// homework answer
// insert()
// ll.insert(begin(),element)
// ll.insert(end(),element)
// insert(mid)
// l.insert(it, elements);
// Insert Multiple Copies
// ll.insert(it, pos, elements); ex-> ll.insert(it, 3, 100);
// here it symbolyes nothing special


#include<iostream>
#include<list>
#include<iterator>
using namespace std;

void printList(list<int>ll) {
    list<int>::iterator itr;
    for(itr = ll.begin();itr != ll.end(); itr++) {  // this line is print
        cout<<(*itr)<<" -> ";
    }
    cout<<"NULL"<<endl;
}


int main() {
    list<int>ll;  //vecotr<int> arr

    ll.push_front(2);
    ll.push_front(1);  //1->2

    ll.push_back(3);  //1->2->3
    ll.push_back(4);  //1->2->3->4

    printList(ll);
    cout<<ll.size() << endl;
    
    cout<<"head = " <<ll.front() <<"\n";
    cout<<"tail = " <<ll.back() <<"\n";
    
    ll.pop_front();
    ll.insert(ll.end(),5);
    
    printList(ll);

    return 0;
}