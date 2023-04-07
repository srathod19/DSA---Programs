#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {5, 4, -1, 7, 8};
    int n = 5;
    int sum = 0;
    int maxi = arr[0];
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        maxi = max(maxi, sum);
        if (sum < 0)
        {
            sum = 0;
        }
        // break;
    }
    cout << maxi << "islargsset";
}