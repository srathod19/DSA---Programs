#include <iostream>
using namespace std;
void insertionSort(int arr[], int n, int i)
{
    if (n == 0 || n == 1)
        return;
    if (i < n - 1)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                cout << "i = " << i << ", j = " << i + 1 << endl;
                swap(arr[i], arr[j]);
            }
        }
        insertionSort(arr, n, i + 1);
    }
}
int main()
{
    int arr[5] = {2, 3, 1, 5, 4};
    int n = 5;
    insertionSort(arr, n, 0);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}
