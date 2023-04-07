#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // int ans[3][3] = {0};
    for (int j = 0; j < 3; j++)
    {
        if (j & 1)
        {

            for (int i = 3 - 1; i >= 0; i--)
            {
                cout << arr[i][j];
                // ans.push_back(arr[i][j]);
            }
            cout << endl;
        }
        else
        {
            for (int i = 0; i < 3; i++)
            {
                cout << arr[i][j];
                // ans.push_back(arr[i][j]);
            }
            cout << endl;
        }
    }
}