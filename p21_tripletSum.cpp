#include <iostream>
using namespace std;
int main()
{
    int arr[9] = {1, 2, 4, 5, 6, 7, 8, 9, 10};
    int n = 9;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                int ans = arr[i] + arr[j] + arr[k];
                cout << arr[i] << "+" << arr[j] << "+" << arr[k] << "=" << ans << endl;
                k++;
                j++;
                i++;
                break;
            }
            j++;
            i++;
            break;
        }
    }
}