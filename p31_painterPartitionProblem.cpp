#include <iostream>
using namespace std;
bool isPossible(int arr[], int n, int k, int mid)
{
    int painterCount = 1;
    int board = 0;
    for (int i = 0; i < n; i++)
    {
        if (board + arr[i] <= mid)
        {
            board += arr[i];
        }
        else
        {

            painterCount++;
            if (painterCount > k || arr[i] > mid)
            {
                return false;
            }
            board += arr[i];
        }
        if (painterCount > k)
        {
            return false;
        }
    }
    return true;
}
int partition(int arr[], int n, int k)
{
    int sum = 0;
    int start = 0;
    int ans = -1;
    int end = n - 1;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    end = sum;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (isPossible(arr, n, k, mid))
        {
            ans = mid;
            mid = end - 1;
        }
        else
        {
            start = start + 1;
        }
        mid = (start + end) / 2;
    }
    return ans;
}
int main()
{
    int arr[4] = {5, 5, 5, 5};
    int n = 4;
    int k = 2;
    cout << partition(arr, n, k);
}