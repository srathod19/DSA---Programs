#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> intervals{
        {1, 3},
        {2, 4},
        {7, 8}};
    vector<vector<int>> mergedIntervals;
    if (intervals.size() == 0)
    {
        cout << 0;
    }

    sort(intervals.begin(), intervals.end());
    vector<int> tempInterval = intervals[0];
    for (auto i : intervals)
    {
        if (i[0] <= tempInterval[1])
        {
            tempInterval[1] = max(i[1], tempInterval[1]);
        }
        else
        {
            mergedIntervals.push_back(tempInterval);
            tempInterval = i;
        }
    }
    mergedIntervals.push_back(tempInterval);
    // return mergedIntervals;
    cout << "Answer below:" << endl;
    for (int i = 0; i < mergedIntervals.size(); i++)
    {
        for (int j = 0; j < mergedIntervals.size(); j++)
        {
            cout << mergedIntervals[i][j] << " ";
        }
        cout << endl;
    }
}