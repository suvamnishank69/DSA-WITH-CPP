//wap where user can keep entering numbers till they enter a multiple of 10;

//my code

// # include<iostream>
// using namespace std;

// int main(){
//     int n;

//     do{cin>>n}
//     while (n%10 == 0 )
//     {
//         cout<<"enter num"<<endl;
//         if(n%10 ==0 )
//         break;
//     }
    
//     return 0;
// }

# include<iostream>
using namespace std;

int main(){
    int n;

    do{
        cout<<"enter number: ";
        cin>>n;
        if(n % 10 == 0){
            break;
        }
        cout<<"you entered "<< n<<endl;
        
    }while (true);  // this line help to run it infinit times till the conditon or updations meet

     return 0;
}

    