#include<iostream>
#include <cstring>
using namespace std;

void toUpper(char word[],int n){
    
    for(int i=0;i<n;i++){
        char ch = word[i];
        if(ch>='A' && ch<='Z'){ // uppercase
            continue;
        }else{  // lowercase
            word[i] = ch - 'a' +'A';
            // let ch(p=112) - 97 + 65
            
        }
    }
}

void tolower(char word[],int n){
    
    for(int i=0;i<n;i++){
        char ch = word[i];
        if(ch>='a' && ch<='z'){ // lowercase
            continue;
        }else{  // uppercase
            word[i] = ch - 'A' +'a';
             // let ch(p=80) - 65 + 97
        }
    }
}

int main(){
    char word[] = "apPlebB";
    char word1[] = "apPlebB";

    toUpper(word, strlen(word));
    tolower(word1, strlen(word));

    cout<< word<< endl;
    cout<< word1<< endl;

    return 0;
}


// logic to convert uppercase to lowercase
// word[i] = ch - 'a' +'A';
//             // let ch(p=112) - 97 + 65
            

// logic to convert lowercase to uppercase
// word[i] = ch - 'A' +'a';
//              // let ch(p=80) - 65 + 97 

