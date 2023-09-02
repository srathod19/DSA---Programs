#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// using extra space
// int main()
// {
//     int arr1[4] = {1, 3, 4, 6};
//     int arr2[4] = {2, 5, 7, 8};
//     int arr3[8] = {0};
//     int n = 4;
//     int m = 4;
//     int i = 0;
//     int j = 0;
//     int k = 0;
//     while (i < n && j < m)
//     {
//         if (arr1[i] < arr2[j])
//         {
//             arr3[k++] = arr1[i++];
//         }
//         else
//         {
//             arr3[k++] = arr2[j++];
//         }
//     }
//     while (i < n)
//     {
//         arr3[k++] = arr1[i++];
//     }
//     while (j < m)
//     {
//         arr3[k++] = arr2[j++];
//     }
//     for (int i = 0; i < n + m; i++)
//     {
//         cout << arr3[i] << " ";
//     }
// }
int main()
{
    int arr1[5] = {1, 2, 3, 0, 0};
    int arr2[2] = {5, 7};

    int i = 0, j = 0;
    int k = 0;
    int n = 3;
    int m = 2;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            cout << "if; " << arr1[i] << endl;
            arr1[k++] = arr1[i++];
        }
        else
        {
            cout << "else; " << arr2[j] << endl;
            arr1[k++] = arr2[j++];
        }
    }
    while (i < n)
    {
        arr1[k++] = arr1[i++];
    }
    while (j < m)
    {
        arr1[k++] = arr2[j++];
    }
    for (int i = 0; i < n + m; i++)
    {
        cout << arr1[i] << " ";
    }
}