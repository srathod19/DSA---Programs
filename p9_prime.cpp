#include<iostream>
using namespace std;
int main(){
    int n=9;
    for(int i=2; i<9; i++){
        if(n%i == 0){
        cout<<"Not prime"<<endl;
        break;  
        }else{

        cout<<" prime"<<endl;
        }
    }
}