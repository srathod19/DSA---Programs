#include <iostream>
using namespace std;
int sayDigit(int n, string arr[])
{
    // creating a base case
    if (n == 0)
        return 1;
    // taking last digit from number
    int digit = n % 10;
    // taking remaiining digits forward
    n = n / 10;
    // calling function
    sayDigit(n, arr);
    // prntign the output
    cout << arr[digit] << " ";
}
int main()
{
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n = 124;
    int ans = sayDigit(n, arr);
    // cout << "say: " << ans << endl;
}