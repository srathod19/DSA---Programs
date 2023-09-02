#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> matrix{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int n = matrix.size();
    cout << "size: " << n << endl;

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            // cout << "i->" << i << ", j->" << j << endl;
            // cout << "swap: " << matrix[i][j] << "<->" << matrix[j][i] << endl;
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    // traanspose matrix
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix.size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "-------------------" << endl;
    for (int i = 0; i < matrix.size() / 2; i++)
    {
        for (int j = 0; j < matrix.size(); j++)
        {
            // cout << "i->" << i << ", j->" << j << endl;
            // cout << "swap: " << matrix[i][j] << "<->" << matrix[n - i - 1][i] << endl;
            swap(matrix[i][j], matrix[matrix.size() - i - 1][j]);
        }
    }

    // 90degrees
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix.size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}