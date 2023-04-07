#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {6, 2, 8, 4, 10};
    // int arr[5] = {'e', 'c', 'd', 'b', 'a'};;
    int n = 5;
    int mini = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
                // int temp = arr[i];
                // arr[i] = arr[j];
                // arr[j] = temp;
            }
        }

        cout << arr[i] << " ";
    }
}