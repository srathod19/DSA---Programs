#include <iostream>
using namespace std;
bool isSorted(int arr[], int n) // array is sorted or not.
{
    if (n == 0 || n == 1)
        return true;

    if (arr[0] > arr[1 + 1])
    {
        return false;
    }
    else
    {
        isSorted(arr + 1, n - 1);
    }
    return true;
}
int main()
{
    int arr[5] = {2, 4, 6, 9, 10};
    int target = 9;
    int n = 5;
    int start = 0;
    // int ans = binarySearch(arr, n, target);
    int ans = isSorted(arr, n);
    if (ans == true)
    {
        cout << "array is sorted";
    }
    else
    {
        cout << "array is not sorted";
    }
}