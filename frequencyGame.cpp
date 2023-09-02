#include <iostream>
#include <map>
using namespace std;
int main()
{
    int arr[5] = {3, 3, 4, 4, 5};
    int n = 5;
    int min = INT_MAX;
    int ans = -1;
    map<int, int> map;
    for (int i = 0; i < n; i++)
    {
        map[arr[i]]++;
    }
    for (auto i : map)
    {
        if (i.second < min)
        {
            min = i.second;
            ans = i.first;
        }
        else if (i.second == min)
        {
            ans = max(ans, i.first);
        }
        // cout<<i.first<<"-"<<i.second<<endl;
    }
    cout << "Anwer is:" << ans;
}