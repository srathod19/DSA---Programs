#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int k = 2;
    int count = 1;
    for (int j = 0; j < k; j++)
    {

        for (int i = n - 1; i > 0; i--)
        {
            swap(arr[i], arr[i - 1]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}