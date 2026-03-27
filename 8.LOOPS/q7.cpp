// my code

// #include<iostream>
// using namespace std;

// int main (){
//     int n ;
//     cout<<"give a number";
//     cin>>n;
//     int oddDigSum = 0;
//    

//     while ( n > 0)
//     {
//       int lastDig = n % 10;
//         if(lastDig % 2 != 0 ){
//             oddDigSum += lastDig;
//         }else{    // it is not requied to use else in the after if.
//             continue;;
//         }
//     }
    
// }


// mam code
//sum of odd dig in a num 
#include<iostream>
using namespace std;

int main (){
    int n =10829;
   int digSum = 0;

   while (n > 0)
   {
    int lastDig = n % 10;
    if (lastDig % 2 != 0){
                                        // it is not requied to use else in the after if. 
        digSum = digSum+ lastDig;
    }
    n = n/10;
   }
   
   cout<<digSum<<endl;
   return 0;

}

