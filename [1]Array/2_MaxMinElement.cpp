#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {7, 2, 4, 5, 7};
    int n = 5;

    int max = arr[0], min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
        if (min > arr[i])
            min = arr[i];
    }
    cout << "max is  :" << max << endl;
    cout << "min is  :" << min << endl;
}