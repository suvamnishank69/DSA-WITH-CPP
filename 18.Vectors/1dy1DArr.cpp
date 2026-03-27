// dynamic memory (vectors  )
// 1D 
#include<iostream>
using namespace std;

int main(){
    //int arr[100] = {1,2,3,4,5};    arr1
    int size;  // have to mantion size in dy memory
    cin>>size;


    int *arr = new int[size];  // arr2
    //   arr[0] => *(arr+0);
    //   arr[1] => *(arr+1);
    //   arr[2] => *(arr+2);
    
    // print a dy arr
    int x=1;
    for(int i=0;i<size;i++){
        arr[i] = x;
        cout<<arr[i]<<" ";
        x++;
    }
    cout<< endl;

    return 0;
}
 