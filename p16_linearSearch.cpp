#include<iostream>
using namespace std;
bool linearSearch(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[10] = { 5,7,2,-10, 22 , 0, 1};
    int size = 8;
    int key = 10;
    int found = linearSearch(arr,size,key);
    if(found){
        cout<<"present";
    }else{
        cout<<"absent";

    }
}