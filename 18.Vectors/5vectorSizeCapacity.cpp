#include<iostream>
#include<vector>
using namespace std;


// size -> no.of elements
// capacity -> max no of element that vector can hold

int main(){
    vector<int> vec = {1,2,3,4};
    cout<<" size : "<< vec.size() << endl;
    cout<<" capacity : "<< vec.capacity() << endl;
    
    vec.push_back(4); // add element towards last
    cout<<" size : "<< vec.size() << endl;  //4
    cout<<" capacity : "<< vec.capacity() << endl; //8
    return 0;
    
}

// push_back(); // add element towards last
// pop_back()  //// subtract element towards last