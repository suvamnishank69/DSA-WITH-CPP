#include<iostream>
using namespace std;

// int main(){
//     int year;
//     cout<<"enter a year";
//     cin>>year;

//     if(year%4 == 0 && year%100 ==0){
//         cout<<year<<"this is a leap year";
//     }else{
//         cout<<"not a leap year";
//     }
//     return 0;
// }

int main() {
 int year;
 cin >> year;

if (year % 400 == 0) {
    cout << year << "is a leap year.\n";
} else if (year % 100 == 0 ) {
    cout << year << "is NOT a leap year.\n";
}else if(year %4 == 0){
    cout << year << "is a leap year.\n";
}else{
    cout<<year<<"isNOTaleapyear.\n";
}
return 0;
}