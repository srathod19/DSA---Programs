#include <iostream>
#include <stack>
using namespace std;
bool knows(int arr[3][3], int a, int b, int n)
{
    if (arr[a][b] == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int celebrity(int arr[3][3], int n)
{
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        s.push(i);
    }
    while (s.size() > 1)
    {
        int a = s.top();
        s.pop();
        int b = s.top();
        s.pop();

        if (knows(arr, a, b, n))
        {
            s.push(b);
        }
        else
        {
            s.push(a);
        }
    }
    int ans = s.top();
    int zeroCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[ans][i] == 0)
        {
            zeroCount++;
        }
    }
    if (zeroCount != n)
    {
        return -1;
    }

    int oneCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i][ans] == 1)
        {
            oneCount++;
        }
    }
    if (oneCount != n)
    {
        return -1;
    }
    return ans;
}
int main()
{
    int n = 3;
    int arr[3][3] = {0, 1, 0, 0, 0, 0, 0, 1, 0};

    cout << "celebrity is :" << celebrity(arr, n);
}