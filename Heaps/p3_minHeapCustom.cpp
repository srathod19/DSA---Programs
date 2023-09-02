#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    int i;
    int j;
    node(int data, int row, int col)
    {
        this->data = data;
        i = row;
        j = col;
    }
};
class compare{
    public:
    bool operator()(node* a, node* b){
        return a->data > b->data;
    }
}
int main(){
    priority_queue<node*, vector<node*>, compare> minHeap;
       
}