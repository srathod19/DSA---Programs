#include<iostream>
using namespace std;
int main(){
    int num=1;
    while(num){
        switch(num){
            case 1:
                cout<<"first";
                break;
        
            case 2:
                cout<<"second";
                break;
            case 3:
                cout<<"third";
                break;
            default:
                cout<<"nothin";
            }
            break;
    }
}