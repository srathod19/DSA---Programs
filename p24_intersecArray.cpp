#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int arr1[5] = {1, 2, 9, 4, 10};
    int n = 5;
    int ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr1[j])
            {
                ans = arr[i];
                cout << ans << " ";
                break;
            }
        }
    }
}