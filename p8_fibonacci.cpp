#include<iostream>
using namespace std;
int main(){
    int n=10;   
    int a=0;   
    int b=1;   
    cout<<a<<" ";
    cout<<b<<" ";
        
    for (int i=0; i<=10; i++){
        int sum = a + b;
        cout<<sum<<" ";
        a=b;
        b=sum;
    }
}