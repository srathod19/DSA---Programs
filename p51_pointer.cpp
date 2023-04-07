#include <iostream>
using namespace std;
void update(int **p)
{
    // *p = *p + 1;
    **p = **p + 1;
    cout << "Inside block:" << *p << endl;
}
int main()
{
    int num = 10;
    int *ptr = &num;
    int **ptr1 = &ptr;
    int arr[10] = {2, 10, 4};
    cout << "before update:" << ptr1 << endl;
    update(ptr1);
    cout << "after update:" << *ptr << endl;
    // Double ponter
    cout << "Double pointer:" << **ptr1 << endl;
    int *ptr2 = arr;
    cout << "Another:" << *ptr2;
    // *ptr = *ptr + 1;
    // cout << "Value is :" << *(arr + 1);
}