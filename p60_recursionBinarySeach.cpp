#include <iostream>
using namespace std;
int binarySearch(int arr[], int s, int e, int key)
{
    if (s > e)
        return -1;
    int mid = (s + e) / 2;
    if (arr[mid] == key)
        return 1;
    if (arr[mid] < key)
    {

        return binarySearch(arr, mid + 1, e, key);
    }
    else
    {
        return binarySearch(arr, s, mid - 1, key);
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int s = 0;
    int e = n - 1;
    int key = 90;
    int ans = binarySearch(arr, s, e, key);
    if (ans == 1)
    {

        cout << "found";
    }
    else
    {
        cout << "not found";
    }
}