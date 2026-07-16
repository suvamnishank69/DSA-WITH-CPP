// here normal recornsion wont work
// we will have same value as stack before  (means:  before and after will be same)

// we have to use push at bottom

#include <iostream>
#include <stack>
#include <string>
using namespace std;

void pushAtBottom(stack<int> &s,int val){  
    if(s.empty()){
    s.push(val); 
    return;
}
    int temp = s.top();
    // cout<<s.top()<<endl;
    s.pop();
    pushAtBottom(s,val);
    s.push(temp);
} 


void reverse(stack<int> &s){   //should pass srtack by reference to show in int main
    if(s.empty()) {
        return;

    }

    int temp = s.top();
    s.pop();
    reverse(s);

    pushAtBottom(s,temp);
}

void printStack(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<< " ";
        s.pop();
    }
    cout<<"\n";
}
int main(){
    stack<int> s;
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    printStack(s);
   
    cout<<"\n";
    
    reverse(s);
    printStack(s);



    return 0;
}



// main
// s = [4,3,2,1]

//           │
//           ├── reverse(s)      --> reference
//           │                     modifies original
//           │
//           ├── pushAtBottom(s) --> reference
//           │                     modifies original
//           │
//           └── printStack(s)   --> value
//                                 makes a copy
//                                 prints copy
//                                 original unchanged

// Rule of thumb
// Pass by reference (&) → when the function must modify the original object or you want to avoid copying large objects.
// When you pass an object by value, C++ creates a copy of that object. When the function finishes, that copy goes out of scope and its destructor is called automatically. For user-defined class types, this copy is typically made using the class's copy constructor

// Pass by value → when the function should work on a copy, leaving the original unchanged.

// Easy rule to remember
// Pass by reference (&) → No copy is made → Changes affect the original object.
// Pass by value → A copy is made → Changes affect only the copy → The copy is destroyed when the function ends.