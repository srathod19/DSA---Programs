#include <iostream>
#include <vector>
using namespace std;
void solve(vector<int> arr, vector<int> output, int index, vector<vector<int>> &ans)
{
    if (index >= arr.size())
    {
        ans.push_back(output);
        return;
    }
    solve(arr, output, index + 1, ans);
    int element = arr[index];
    output.push_back(element);
    solve(arr, output, index + 1, ans);
}
int main()
{

    vector<int> arr = {1, 2, 3};
    vector<int> output;
    vector<vector<int>> ans;
    int index = 0;
    int n = 3;
    solve(arr, output, index, ans);
    // for (int i = 0; i < ans.size(); i++)
    // {

    //     std::cout << ans[i];
    // }
}