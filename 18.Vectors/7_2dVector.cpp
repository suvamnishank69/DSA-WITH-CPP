//2D vector
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}}; // Imp syntax for 2d Vector --> vector <vector<int>> nameofVector
    
    for(int i=0;i<matrix.size();i++){  
        for(int j=0; j<matrix[i].size();j++){ // it is dynamic  
            // j<matrix[i].size() --> size of that row ;i.g= 123,456 you can change that if you want
            cout<<matrix[i][j]<< " ";
        }
        cout<<endl;
    }
    return 0;
}

// no.of row  is not fix in 2d vector
// u can do  vector <vector<int>> matrix = {{1,2,3},{5,6},{9}};


// it is possible too
// int main(){
//     vector <vector<int>> matrix = {{1,2,3},{4,5},{7,}};
    
//     for(int i=0;i<matrix.size();i++){  
//         for(int j=0; j<matrix[i].size();j++){   
//             cout<<matrix[i][j]<< " ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
 
