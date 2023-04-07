#include <iostream>
using namespace std;
int main()
{
    int arr[11] = {1, 2, 3, 4, 5, 5, 7, 8, 9, 10, 11};
    int n = 11;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            // swap(arr[i], arr[j]);
            i++;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}