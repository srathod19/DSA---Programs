#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5, 6};
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int ans = arr[i] + arr[j];
            cout << arr[i] << "+" << arr[j] << "=" << ans << endl;
            j++;
            i++;
            break;
        }
    }
}