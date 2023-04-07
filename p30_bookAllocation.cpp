#include <iostream>
using namespace std;
bool isPossible(int arr[], int n, int m, int mid)
{
    int studentCount = 1;
    int pageSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
            cout << pageSum << ";if" << endl;
        }
        else
        {
            studentCount++;
            if (studentCount > m || arr[i] > mid)
            {
                return false;
            }
            pageSum = arr[i];
            cout << pageSum << ";else" << endl;
        }
        if (studentCount > m)
        {
            return false;
        }
    }
    return true;
}
int allocateBooks(int arr[], int n, int m)
{
    int start = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int end = sum;
    int ans = -1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    return ans;
}
int main()
{
    int n = 4;
    int m = 2;
    int arr[4] = {10, 20, 30, 40};
    cout << allocateBooks(arr, n, m);
}