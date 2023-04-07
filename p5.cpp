#include<iostream>
using namespace std;
// int main(){
//     int n=1;
//     int sum=0;
//     while(n<=5){
//         sum = sum+n;
//         n++;
// cout<<n<<endl;
//     }
// cout<<sum<<endl;

// }
// int main(){// Sum of even number
//     int n=1;
//     int sum=0;
//     while(n<=5){
//         if(n%2 == 0){
//         sum = sum+n;
//         }
//         n++;
//     }
//         cout<<sum<<endl;

// }
int  main(){
    int n;
    int i=2;
    cout<<"enter the number:";
    cin>>n;
    while(i<n){

    if(n%i == 0){
        cout<<"Number isnt prime for:"<<i<<endl;
    }else{
        cout<<"Number is prime for:"<<i<<endl;
    }
    i++;
    }
}