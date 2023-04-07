#include<iostream>
using namespace std;
int main(){
    // int a = 3;
    int rs100,rs50,rs20,rs1;
    int ans;
    cout<<"Enter the amount:";
    cin>>ans;
    switch(1){
        case 1:
            rs100 = ans/100;
            ans= ans%100;
            cout<<rs100<<":of 100 rs note"<<endl;
        case 2:
            rs50 = ans/50;
            ans= ans%50;
            cout<<rs50<<":of 50 rs note"<<endl;
        case 3:
            rs20 = ans/20;
            ans= ans%20;
            cout<<rs20<<":of 20 rs note"<<endl;
        case 4:
            rs1 = ans/1;
            ans= ans%1;
            cout<<rs1<<":of 1 rs note"<<endl;
            
    }
    return 0;

}