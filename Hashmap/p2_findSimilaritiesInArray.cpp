#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<int, int> map;
    int n = 5;
    int arr1[5] = {1, 2, 3, 4, 5};
    int m = 4;
    int arr2[4] = {2, 4, 6, 8};
    int arr3[100] = {0};
    int count = 0;
    int i = 0;
    while (count < n)
    {
        arr3[i] = arr1[count];
        i++;
        count++;
    }
    count = 0;
    while (count < m)
    {
        arr3[i] = arr2[count];
        i++;
        count++;
    }
    i = 0;
    while (i < 9)
    {
        // cout << arr3[i] << " ";
        map[arr3[i]]++;
        i++;
    }
    count = 0;
    for (auto i : map)
    {
        if (i.second > 1)
        {
            count++;
        }
    }
    cout << count << " " << i;
}