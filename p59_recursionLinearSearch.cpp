#include <iostream>
using namespace std;
bool findEle(int arr[], int n, int key)
{
    if (n == 0)
        return false;
    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        findEle(arr + 1, n - 1, key);
    }
    return false;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int key = 0;
    int ans = findEle(arr, n, key);
    if (ans)
    {
        cout << "Found!";
    }
    else
    {
        cout << "Not found!";
    }
}