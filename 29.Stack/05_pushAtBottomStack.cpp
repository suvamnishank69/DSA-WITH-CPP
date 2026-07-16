// Push At bottom od Stack

// 1.pop every nunmber
// 2.till stack is empty
// 3.push your number
// 4.push all the number u pop in the order

#include<iostream>
#include<stack>
using namespace std;

void pushAtBottom(stack<int> &s,int val){  //here we pass value by refference bcz in stl lib we have to do that
    if(s.empty()){
    s.push(val); //push at top = push at bottom
    return;
}
    int temp = s.top();
    // cout<<s.top()<<endl;
    s.pop();
    pushAtBottom(s,val);
    s.push(temp);
} 



int main() {
    stack<int>s;

    s.push(3);
    s.push(2);
    s.push(1);

    pushAtBottom(s,4);

    while(!s.empty()) {
        cout<<s.top()<<" ";
        s.pop();
    }

    cout<<endl;
    return 0;
}