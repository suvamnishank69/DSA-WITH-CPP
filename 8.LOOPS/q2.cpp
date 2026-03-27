
#include<iostream>
using namespace std;
 int main() {
    int n;
    int a = 1;
    cout<<"give the number";
    cin>>n;
    if(n<=a){
        for(a>=n;n<=a;n++){
            cout<<n<<" "<<endl;
        }
    }else{
        for(a<=n;n>=a;n--){
            cout<<n<<" "<<endl;
        }
    }
 }

 