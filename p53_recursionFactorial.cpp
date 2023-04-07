#include <iostream>
using namespace std;
int fact(int n)
{
    if (n == 0)
        return 1;
    // cout << n << "*" << n - 1 << "=";
    // cout <<n * fact(n - 1)  << endl;
    return 2 * fact(n - 1);
}
int main()
{
    int n = 4;
    int ans = fact(n);
    cout << ans;
}