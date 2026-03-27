// // looping in arr output
// //case-1
// #include<iostream>
// using namespace std;

// int main(){
//     int arr[5]={3,4,2,6,7};
//     int len = sizeof(arr)/sizeof(int);
    
//     for(int idx=0;idx<=len-1;idx++){
//         cout<<arr[idx]<<"\n";
//     }
    
//     cout<<endl;
//     return 0;
    
// }

//case-2

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the lenth of arr"<<"\n";
    cin>>n;

    int arr[n];
    // int n = sizeof(arr)/sizeof(int);

    //input of arr
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    
    //output of arr
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" , ";
    }
    
    cout<<endl;
    return 0;
    
}
