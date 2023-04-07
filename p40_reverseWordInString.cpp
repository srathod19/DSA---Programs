#include<iostream>
using namespace std;
int getLength(char arr[]){
    int count =0 ;
    for(int i=0;arr[i]!='\0'; i++){
        count++;    
    }
    return count;
}
char reverseString(char arr[],int n){
    int start = 0;
    int end = n-1;
    while(start >end){
        cout<<arr[start++]<<" "<<arr[end--]<<endl;
            swap(arr[start++], arr[end--]);
        }
    

}
int main(){
    char arr[20]={"iam",' ', "sachin"};
    int len = getLength(arr);
    reverseString(arr,len);
    cout<<arr;
}