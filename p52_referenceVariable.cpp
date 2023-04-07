#include <iostream>
using namespace std;
int main()
{
    int i = 5;
    // create a reference variable
    int &j = i;
    cout << "Printing J: " << j << endl;
    // creating an array
    int n;
    int *arr = new int[n];
    cout << "enter the number " << sizeof(*arr);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        cout << "this is thee size " << sizeof(*arr);
    }
}