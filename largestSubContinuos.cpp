#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 7, 5};
    int k = 12;
    int n = 5;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum = sum + arr[j];
            if (sum == k)
            {
                cout << i << " " << j << endl;
                i = n;
            }
            else
            {
                continue;
            }
        }
        sum = 0;
    }
}