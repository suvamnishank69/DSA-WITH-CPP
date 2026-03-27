// Search in sorted matrix
// search for a key in row wise & col wise sorted matrix

// do these two youself
// 1.Bruteforce
// 2.Row/Col


#include<iostream>
using namespace std;

bool seaSortedMat(int mat[][4],int n, int m,int key){
    int i = 0, j= m-1;

    //O(n+m)
    while(i<n&&j>=0){
        if(mat[i][j]==key){
            cout<<"found at cell (" << i << "," << j << ")\n";
            return true;
        }else if(mat[i][j]>key){
            //left
            j--;
        }else{
            //down
            i++;
        }
    }
    cout << "key not found or exist\n";
    return false;

}

int main(){

    int matrix[4][4]= {{10,20,30,40},
                       {15,25,35,45},
                       {27,29,37,48},
                       {32,33,39,50}} ;


    seaSortedMat(matrix,4,4,25);
    return 0;
}

