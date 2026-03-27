#include<iostream>
using namespace std;

int main (){
    int arr[3][4]; //2d arr declaration
    int n=3,m=4; //row and col
    
    // to take in put of 2d arr (row)
    for(int i= 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    // to print out put of arr
    for(int i= 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
}
  return 0;

}