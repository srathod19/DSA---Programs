#include <iostream>
using namespace std;
  
// Driver Code
// int main()
// {
//     int s;
  
//     // Take input using cin
//      cout << "Enter the number:1";
//     cin >> s;
  
//     // Print output
//     if(s>0){
//         cout<<"nubmer is +ve"<< s;

//     }else{
//         cout<<"nubmer is -ve"<< s;

//     }
//     return 0;
// }
// int main(){
//     int a,b;
//     cout<<"Entter the value of A:";
//     cin>>a;
//     cout<<"Entter the value of B:";
//     cin>>b;
//     if(a>b){
//         cout<<"A is greater than B";
//     }else{
//         cout<<"B is greater than A";

//     }
// }
// int main(){
//     int a;
//     cout<<"Entter the value of A:";
//     cin>>a;

//     if(a>0){
//         cout<<"A is +ve";
//     }else if(a == 0){
//         cout<<"A is zero";
//     }else{
//         cout<<"A is -ve";
//     }
// }
// int main(){
//     int a =24;
//     if(a>20){
//         cout<<"Love";
//     }
//     if(a ==24){
//         cout<<"lovely";        
//     }
//     else{
//         cout<<"Bba";

//     }
//     cout<<a;
// }
// int main(){
//     int a = 2;
//     int b = a+1;
//     if((a=3)==b){
//         cout<<"first"<<a;
//     }else{
//         cout<<a+1;

//     }
// }
int main(){
    char ch='n';
    if((ch > 'a') && (ch<'z')){
        cout<<"ths is lowercase";
    }
    
    if((ch > 'A') && (ch<'Z')){
        cout<<"ths is Upper case";
    }
    
    if((ch > 0) && (ch<9)){
        cout<<"ths is numeric";
    }
}