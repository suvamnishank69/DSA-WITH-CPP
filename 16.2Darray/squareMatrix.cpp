#include<iostream>
using namespace std;

int main(){

    int n=3;
    int m=3;

    int arr[n][m] = {{10,20,30},{7,8,9},{15,40,60}};

    for(int i=0;i<n;i++){
        for(int j=i;j<m;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){

            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
// it requires no extar space

