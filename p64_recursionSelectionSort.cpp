#include <iostream>
using namespace std;
void selectionSort(int arr[], int n, int i = 0)
{
    if (n == 0 || n == 1)
        return;
    cout << "i = " << arr[i];
    if (i < n)
    {

        for (int j = i + 1; j < n; j++)
        {
            cout << "j = " << arr[j] << endl;
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
        selectionSort(arr, n, i + 1);
    }
}
int main()
{
    int arr[5] = {2, 3, 1, 5, 4};
    int n = 5;
    selectionSort(arr, n, 0);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}