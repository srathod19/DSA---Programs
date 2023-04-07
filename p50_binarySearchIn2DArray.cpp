#include <iostream>
using namespace std;
int main()
{
    int arr[3][4] = {1, 3, 5, 7, 10, 11, 16, 20, 23, 30, 34, 60};
    int col = 3;
    int row = 3;
    int start = 0;
    int target = 16;
    int end = (col * row) - 1;
    int mid = (start + end) / 2;
    while (start < end)
    {
        if (arr[mid / col][mid % col] == target)
        {
            cout << "1-";
            cout << mid;
        }
        if (arr[mid / col][mid % col] < target)
        {
            start = mid + 1;
        }
        if (arr[mid / col][mid % col] > target)
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return true;
}
