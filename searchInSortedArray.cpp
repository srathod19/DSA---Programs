#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int> &arr, int s, int e, vector<int> &ans, vector<int> &query)
{

    int mid = (s + e) / 2;
    int i = 0;
    while (s <= e && i < query.size())
    {
        cout << arr[mid] << " " << query[i] << endl;
        if (arr[mid] == query[i])
        {
            i++;
            ans.push_back(1);
            cout << "this" << endl;
        }
        if (arr[mid] < query[i])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = (s + e) / 2;
    }
    ans.push_back(0);
}
int main()
{
    vector<int> arr{1, 2, 3, 4, 5};
    vector<int> query{1, 2};
    int n = arr.size();
    vector<int> ans;
    int start = 0;
    int end = n - 1;
    binarySearch(arr, start, end, ans, query);
    cout << "Answer:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}