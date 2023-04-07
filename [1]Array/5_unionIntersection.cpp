#include <iostream>
using namespace std;
int main()
{
    int arr[3] = {1, 2, 4};
    int arr1[3] = {1, 2, 5};
    int n = 3;

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr1[i])
        {
            ans = arr[i];
            int ans1 = arr[i];
            // cout << "INtersection:" << ans1 << " ";
            cout << ans << " ";
            // break;
        }
        else
        {
            cout << arr[i] << " " << arr1[i] << " ";
        }
    }
}