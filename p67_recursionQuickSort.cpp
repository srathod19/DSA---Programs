#include <iostream>
using namespace std;
int partition(int arr[], int s, int e)
{
    int pivot = arr[s];
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[s] > arr[i])
        {
            count++;
        }
    }
    int pivotIndex = s + count;
    swap(arr[s], arr[pivotIndex]);

    while (s < pivotIndex && e > pivotIndex)
    {
        while (arr[s] <= pivot)
        {
            s++;
        }

        while (arr[e] > pivot)
        {
            e--;
        }
        if (s < pivotIndex && e > pivotIndex)
        {
            swap(arr[s++], arr[e--]);
        }
    }
    return pivotIndex;
}
void quickSort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int p = partition(arr, s, e);
    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, e);
}
int main()
{
    int arr[6] = {4, 3, 1, 2, 6, 5};
    int n = 6;
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}