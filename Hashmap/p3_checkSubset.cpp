#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    int arr1[4] = {1, 2, 3, 1};
    int n = 4;
    int arr2[2] = {1, 1};
    int m = 2;

    unordered_map<int, int> map;

    for (int i = 0; i < n; i++)
    {
        map[arr1[i]];
    }
    for (int i = 0; i < m; i++)
    {
        map[arr2[i]]++;
    }
    int count = 0;
    for (auto i : map)
    {
        cout << i.first << " " << i.second << endl;
        if (i.second > 0)
        {
            count++;
        }
    }
    cout << count;
    if (count == m)
    {
        cout << true;
    }
    else
    {
        cout << false;
    }
}
