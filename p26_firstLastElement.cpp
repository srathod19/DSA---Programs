#include <iostream>
using namespace std;
int firstElement(int arr[], int key, int n)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return ans;
}

int lastElement(int arr[], int key, int n)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return ans;
}
int main()
{
    int arr[6] = {1, 2, 3, 3, 3, 6};
    int k = 3;
    int n = 6;
    int firstEle = firstElement(arr, k, n);
    int lastEle = lastElement(arr, k, n);
    cout << "first index is:" << firstEle << endl
         << "last index is :" << lastEle;
}
