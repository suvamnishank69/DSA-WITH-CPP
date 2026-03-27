// google,micro
#include<iostream>
using namespace std;

void removeDuplicates(string str,string ans, int i, int map[26]){
 
    if(i == str.size()) {
        cout<<"ans : "<< ans << endl;
        return ;
    }

    int mapIdx = (int)(str[i] - 'a');

    if(map[mapIdx]) { //duplicate
        removeDuplicates(str,ans,i+1,map);{}
    }else{ // not duplicate
        map[mapIdx] = true;
        removeDuplicates(str,ans+str[i],i+1,map);
    }
}

int main(){

    string str ="appnnacollege";
    string ans ="";
    int map[26] = {false};

   
    removeDuplicates(str,ans,0,map);

    return 0;
}


// there is a 3 step formula to solve recursion
// 1.kam
// 2.recursive call
// 3.base case