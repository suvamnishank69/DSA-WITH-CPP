// print a FLOYD'S triangle
// 1
// 2 3
// 4 5 6 
// 7 8 9 10
// 11 12 13 14 
#include<iostream>
using namespace std; 

int main(){
    int n =5;
    int num = 1;
    for(int i = 0;i<n;i++ ){
        for(int j = 0;j<i;j++){
            cout<<num;
            cout<<" ";
            
            num++;
        }
        cout<<endl;
    }
}
//my code i cannot dry run it
//i think it has a dry run error

//answer 
// Your code is completely correct and does not have any syntax or dry-run errors. 
// The program uses two nested loops — the outer loop controls the number of rows, and the inner loop prints numbers in each row. 
// The variable num starts from 1 and keeps increasing each time a number is printed.

// (empty line)
// 1
// 2 3
// 4 5 6
// 7 8 9 10   
// The empty first line appears because the first iteration (i = 0) doesn’t print any number.



//mam methods

// #include<iostream>
// using namespace std; 

// int main(){
// int n = 5;
// int num = 1;
// for(int i = 1;i<+n;i++ ){
//     for(int j = 1;j<=i;j++){
//         cout<<num++<<" ";
        
//     }
//     cout<<endl;
// }


// }