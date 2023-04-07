#include <iostream>
using namespace std;
int getLength(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int reverseString(char arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        swap(arr[start++], arr[end--]);
    }
}
int main()
{
    char arr[10];
    cout << "enter the name:";
    cin >> arr;
    int len = getLength(arr);
    cout << "length is :" << len;
    reverseString(arr, len);
    cout << "Reverse:" << arr;
}