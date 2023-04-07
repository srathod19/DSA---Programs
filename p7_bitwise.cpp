#include <iostream>
using namespace std;
int main(){
    int a =5;
    int b=6;
    cout<<(a&b)<<endl;
    cout<<(a|b)<<endl;
    cout<<~a<<endl;
    cout<<(a^b)<<endl;
    cout<<(17<<2)<<endl;
    cout<<(21<<2)<<endl;
    int c= a--;
    cout<<a<<endl;
    cout<<c;
}