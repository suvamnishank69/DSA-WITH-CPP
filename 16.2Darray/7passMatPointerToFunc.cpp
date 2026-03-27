#include<iostream>
using namespace std;

void func(int mat[][4],int n, int m){
    cout<<"0st row ptr "<< mat << endl;
    cout<<"1st row ptr "<< mat+1 << endl;
    cout<<"2st row ptr "<< mat+2 << endl;
    cout<<"\n";
    cout<<"0st row value "<< *mat << endl;
    cout<<"1st row value "<< *(mat+1) << endl;
    cout<<"2st row value "<< *(mat+2) << endl;
}

void func2(int (*mat)[4],int n,int m ){}


int main(){
    int mat[4][4] = {{1,2,3,4},
                     {5,6,7,8},
                     {9,10,11,12},
                     {13,14,15,16}};

    cout<<*(*(mat +2)+2)<< endl;  // it a formula use to fing out value through ptr --> prt[i][j] =*(*(prt+i)+j)
    
    func(mat,4,4);                 


    return 0;                 
}