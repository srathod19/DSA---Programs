#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int key)
{

    int start = 0;
    int end = n - 1;
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
int main()
{
    int arr[7] = {1, 2, 6, 8, 9, 10, 89};
    int index = binarySearch(arr, 7, 6);
    cout << "index of 6 is:" << index;
}