#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[3] = {1, 2, 3};
    int arr1[1] = {1};
    vector<int> ans;
    int n = 3;
    int i = n - 1, j = n - 1;
    int carry = 0;
    while (i < 0 && j < 0)
    {
        int val1 = arr[i];
        int val2 = arr1[j];
        int sum = val1 + val2 + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }
    while (i >= 0)
    {
        int sum = arr[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }
    while (j >= 0)
    {
        int sum = arr1[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }
    while (carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }
    // print(ans);
}