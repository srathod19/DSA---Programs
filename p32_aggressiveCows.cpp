#include <iostream>
using namespace std;
bool isPossible(int arr[], int n, int k, int mid)
{
    int cowCount = 1;
    int lastpos = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - lastpos >= mid)
        {
            cowCount++;
            if (cowCount == k)
            {
                return true;
            }
            lastpos = arr[i];
        }
    }
    return false;
}
int agressiveCows(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    int s = 0;
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    int e = maxi;
    int ans = -1;
    int mid = (s + e) / 2;
    while (s <= e)
    {
        if (isPossible(arr, n, k, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = (s + e) / 2;
    }
    return maxi;
}
int main()
{
    int arr[5] = {4, 2, 1, 3, 6};
    int n = 5;
    int k = 2;
    cout << agressiveCows(arr, n, k);
}
