#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int size;
    cout<<"Enter the size:"<<endl;
    cin>>size;
    int ans= 0;
    for(int i=0; i<size; i++){
        cin>>arr[i];
      ans = ans + arr[i];
    }
    cout<<ans;
}