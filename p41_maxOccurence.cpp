#include <iostream>
using namespace std;
int getLength(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char arr[30];
    cout << "Enter the name ?" << endl;
    cin >> arr;
    int len = getLength(arr);
    int count = 0;
    char maxi = 0;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                maxi = max(arr[i], arr[i]);
            }
        }
        // cout << arr[i] << " " << count << endl;
        count = 0;
    }
    cout << maxi << endl;
}