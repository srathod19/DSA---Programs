#include <iostream>
using namespace std;
bool findUniqu(int n, int arr[], int start, int end)
{
    int present = 0;
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j] && i != j)
            {
                cout << arr[i] << ":is duplicate" << endl;
                break;
            }
        }
    }
}
int main()
{
    int n = 9;
    int arr[9] = {3, 5, 3, 5, 7, 1, 1, 2, 2};
    int start = 0;
    int end = n - 1;
    int ans = 0;
    findUniqu(n, arr, start, end);
    // if(found){
    //     cout<<"is not unique";
    // }else{
    //     cout<<"is unique";
    // }
}