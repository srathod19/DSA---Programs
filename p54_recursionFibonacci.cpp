#include <iostream>
using namespace std;
int fibo(int n)
{
    // using recursion
    /*if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    int ans = fibo(n - 1) + fibo(n - 2);
    return ans;*/

    // using for loop
    int ans = 0;
    for (int i = n; i > 0; i--)
    {
        ans = (n - 1) + (n - 2);
    }
    return ans;
}
int main()

{
    int n = 7;
    int ans = fibo(n);
    cout << "fibonacci  number is:" << ans;
}
