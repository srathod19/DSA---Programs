#include <iostream>
using namespace std;
int binarySearch(int n)
{
    int start = 0;
    int end = n;
    int mid = (start + end) / 2;
    int ans = 0;
    while (start < end)
    {
        if ((mid * mid) > n)
        {
            end = mid - 1;
        }
        if ((mid * mid) < n)
        {
            ans = mid;
            start = mid + 1;
        }
        if ((mid * mid) == n)
        {
            return mid;
        }
        mid = (start + end) / 2;
    }
    return ans;
}
int main()
{
    int target = 8;
    cout << binarySearch(target);
}
