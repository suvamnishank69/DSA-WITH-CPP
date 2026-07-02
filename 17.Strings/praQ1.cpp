// Question 1 : Count how many times lowercase vowels occurred in a String entered
// by the user.

#include<iostream>
#include<cstring>
using namespace std;

int numLowercaseVowel(string str){

    int vowlcount = 0;

    for(int i=0;i<str.length();i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
        str[i] == 'o' || str[i] == 'u'  ){
            vowlcount++;
        }
    }
    return vowlcount;

}

int main() {

    
    cout<<"enter string"<<"\n";

    string word; // creart  a single array
    
    getline(cin,word);
    
    
    cout<<numLowercaseVowel(word);
    
    return 0;
}


// getline(cin,word);  ---> only if u are using string