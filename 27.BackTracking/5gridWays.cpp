// GRID WAYS
// fnd the number of ways to reach from(0,0) to (N-1,M-1) in a N*M Grid.
// Allowed moves - Right or Down

#include<iostream>
#include<vector>
#include<string>
using namespace std;

int gridWays(int r,int c,int n,int m,string ans){
    if(r == n-1 && c == m-1) {  //BC for dest
        cout<<ans<<"\n";
        return 1;
    }
    if(r>=n  || c>= m){
        return 0;
    }
    //right
    int val1 = gridWays(r,c+1,n,m,ans+"R");

    //down
    int val2 = gridWays(r+1,c,n,m,ans+"D");

    return val1 + val2;  //(count all rightside ans + count all left side answer)
}


int main() {
int n=3;
int m=3; //3*3 matrix

 string ans = "";
 cout << gridWays(0,0,n,m,ans);

    return 0;
}

// time complexcity: O(2^n+m) not optimize  
// space complexcity:

// optimizataion with math
// there is a formula (this formula give nu of answer)

// (n-1 + m-1)!
// -------------
// (n-1)! (m-1)!

// ex-:
// here n = 3;
// n - 1 = 2
// here m = 3;
// m - 1 = 2

//   (2+2)!      3!*4
//   -------  = ------ = 3! = 6
//    2! 2!       2*2