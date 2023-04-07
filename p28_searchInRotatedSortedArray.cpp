#include <iostream>
using namespace std;

int binarySearch(int arr[], int s, int e, int key)
{

    int start = s;
    int end = e;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        // Finding the middle part
        if (arr[mid] == key)
        {
            return mid;
        }
        // Searching in the right side
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else // Searchin in the ltft left side.
        {
            end = mid - 1;
        }
        mid = (start + end) / 2; // updatiing the mid.
    }
    return -1;
}
int getPivot(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = (start + end) / 2;
    }
    return start;
}
int main()
{
    int arr[5] = {7, 8, 9, 1, 4};
    int n = 5;
    int target = 9;
    int pivot = getPivot(arr, n);
    if ((arr[pivot] <= target) && (target <= n - 1))
    {
        // for second line
        cout << binarySearch(arr, pivot, n - 1, target);
    }
    else
    {
        // for first line
        cout << binarySearch(arr, 0, pivot - 1, target);
    }
}