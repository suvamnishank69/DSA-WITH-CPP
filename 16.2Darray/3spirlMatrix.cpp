// The Spiral Matrix problem takes a 2-Dimensional array of N-rows and M-columns
// as an input,and prints the elements of this matrix in spiral order

//google,microsoft,apple,amazon,oracle

#include<iostream>
using namespace std;

void spiralMatrix(int mat[][4],int n,int m){ //it is imp to declare atleast one dimension
                        // (n=row),(m=col)
    int srow = 0,scol = 0;
    int erow = n-1,ecol = m-1;

    while (srow <= erow && scol <= ecol ) {
        //top
    for(int j=scol;j<=ecol;j++) {
        cout << mat[srow] [j] << " ";
    }

    //right
    for(int i=srow+1;i<=erow;i++){
        cout<<mat[i][ecol]<<" ";
    }

    //bottom  (move backword so --)
    for(int j=ecol-1;j>=scol; j--){
        if(srow == erow){ //mid  --> this line is valid when matrix is of (row) and (col) are different
            break;
        }
        cout<< mat [erow][j] << " ";
    }
    
    //left 
    for(int i=erow-1; i>=srow+1; i--){
        cout<<mat[i][scol]<< " ";
    }
    srow++;
    scol++;
    erow--;
    ecol--;

    }
    cout<<endl;
    
}

int main(){
    int matrix[4][4] = {{1,2,3,4},
                        {5,6,7,8},
                        {9,10,11,12},
                        {13,14,15,16}};


    spiralMatrix(matrix,4,4);
    return 0;

}
