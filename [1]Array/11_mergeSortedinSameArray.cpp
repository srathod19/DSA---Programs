#include <iostream>
using namespace std;
int main()
{
    int arr1[6] = {1, 2, 4, 0, 0, 0};
    int arr2[3] = {3, 5, 6};
    int n = 3;
    int m = 3;
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            cout << "arr1=" << arr1[i] << "<" << arr2[j] << endl;
            arr1[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            cout << "arr2=" << arr2[j] << endl;
            arr1[k] = arr2[j];
            k++;
            j++;
        }
    }
    while (i < n)
    {
        arr1[k] = arr1[i];
        k++;
        i++;
    }

    while (j < m)
    {
        arr1[k] = arr2[j];
        k++;
        j++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
}