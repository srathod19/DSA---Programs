#include <iostream>
using namespace std;
// Roatate an array by 90 degree
int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int row = 3;
    int col = 3;
    int startingRow = 0;
    int endingRow = row - 1;
    int startingCol = 0;
    int endingCol = col - 1;
    int count = 0;
    int total = row * col;
    while (count < total)
    {
        // printing starting row
        for (int index = endingRow; count < total && index >= startingRow; index--)
        {
            cout << arr[index][startingCol] << " ";
            count++;
        }
        startingCol++;
    }
}