#include<iostream>
using namespace std;
int main(){
    int a = 3;
    int b = 8;
    char ans;
    cout<<"Choose the operation (+,-,*,/):";
    cin>>ans;
    switch(ans){
        case '+':
            cout<<a+b;
            break;
        case '-':
            cout<<a-b;
            break;
        case '*':
            cout<<a*b;
            break;
        case '/':
            cout<<a/b;
            break;
    }

}