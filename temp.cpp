#include <array>
#include <iostream>
using namespace std;
int main()
{
    std::array<int, 5> data = {3, 6, 7, 8, 9};
    // int *arr[] = {1, 2, 4, 4, 5, 6};
    int ans = 0;
    for (int i = 0; i < data.size(); i++)
    {
        ans = ans ^ data[i];
        cout << ans << " ";
    }
    for (int i = 1; i < data.size(); i++)
    {
        ans = ans ^ i;
        cout << ans << " ";
    }
}