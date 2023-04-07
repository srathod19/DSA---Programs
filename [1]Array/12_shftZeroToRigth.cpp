#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {1, 2, 0, 3, 4, 0};
    int n = 6;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[i + 1] && arr[i] == 0)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}