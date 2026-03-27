#include<iostream>
using namespace std;

    void print(int arr[],int  n){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void bubbleSort(int arr[],int n){
        for(int i = 0 ; i < n - 1; i++){
            // bool flag = true;
            for(int j = 0; j < n - i - 1; j++){
                if(arr[j]>arr[j+1]){
                  swap(arr[j],arr[j+1]);
                }
            }

            // if(!flag) {
            //     return ;
            // }

        }
        print(arr,n);
    }


int main(){
    int arr[10]={3,6,2,1,8,7,4,5,3,1};
    bubbleSort(arr,10);
    return 0;

}

