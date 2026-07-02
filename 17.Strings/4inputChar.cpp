#include <iostream>
#include <cstring>
using namespace std;

int main(){
//     char word[30];
//     cin>> word;  // to give input in the str. but dont take input after  space

//     cout<<"your word was : "<<word<<endl;
//     cout<<"length: "<< strlen(word) <<endl;
//     return 0;

    
    char sentence[30];
    cin.getline(sentence,30);//include space
    //          (          ,no. of max char,delimeter) 
    cout<<"your sentence was : "<< sentence<<endl;
    cout<<"length : "<< strlen(sentence)<<endl;
    
    
    
    return 0;
}


// getline : include white space
