#include <iostream>
using namespace std;
int sumOfArray(int arr[], int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return arr[0];
    int nextEle = sumOfArray(arr + 1, n - 1);
    int sum = arr[0] + nextEle;
    return sum;
}
int main()
{
    int arr[5] = {2, 3, 4, 5, 6};
    int n = 5;
    int ans = sumOfArray(arr, n);
    cout << "Sum is : " << ans;
}