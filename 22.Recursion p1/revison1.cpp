// 21-02-2026
// power if a number

#include<iostream>
using namespace std;

int powerIterative(int a,int n) {
    int ans =1;
    for(int i=0;i<n;i++) {
        ans += a;  //ans = ans + a
    }
    return ans;

}

int powerRecursive(int a, int n) {
    if(n == 0) {
        return 1;
    }
    int ans = a*powerRecursive(a,n-1);
    return ans;
}

int main(){
    int ans = powerRecursive(3,5);
    cout<<ans<< endl;
    return 0;
}