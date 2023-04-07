#include <iostream>
using namespace std;
int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int row = 3;
    int col = 3;

    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;
    int count = 0;
    int total = row * col;
    while (count < total)
    {
        // printing startig row
        for (int index = startingCol; count < total && index <= endingCol; index++)
        {
            cout << arr[startingRow][index] << " ";
            count++;
        }
        startingRow++;
        // Printing ending col
        for (int index = startingRow; count < total && index <= endingRow; index++)
        {
            cout << arr[index][endingCol] << " ";
            count++;
        }
        endingCol--;
        // Printing ending row
        for (int index = endingCol; count < total && index >= startingCol; index--)
        {
            cout << arr[endingRow][index] << " ";
            count++;
        }
        endingRow--;
        // Printing startingCol
        for (int index = endingRow; count < total && index >= startingRow; index--)
        {
            cout << arr[index][startingCol] << " ";
            count++;
        }
        startingCol++;
    }
}
// 123698745