#include <iostream>
using namespace std;
int main()
{
    char arr[10];
    cout << "ENter YOur name;";
    cin >> arr;
    cout << arr;
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    cout << count;
}