#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int arr1[3] = {5, 7, 8};
    int arr2[8] = {0};
    int i = 0;
    int j = 0;
    int n = 5;
    int m = 3;
    int count = 0;
    while (i < n && j < m)
    {
        if (arr[i] <= arr1[j])
        {
            arr2[count] = arr[i];
            count++;
            i++;
        }
        else
        {
            arr2[count] = arr1[j];
            count++;
            j++;
        }
    }
    while (i < n)
    {
        arr2[count] = arr[i];
        count++;
        i++;
    }
    while (j < m)
    {
        arr2[count] = arr1[j];
        count++;
        j++;
    }
    for (int i = 0; i < 8; i++)
    {
        cout << arr2[i] << " ";
    }
}