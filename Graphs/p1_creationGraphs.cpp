#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;
class graph
{
public:
    unordered_map<int, list<int>> adj;
    void addAdj(int first, int second, bool direction)
    {
        adj[first].push_back(second);
        if (direction == 0)
        {
            adj[second].push_back(first);
        }
    }
    void printAdj()
    {
        for (auto i : adj)
        {
            cout << i.first << "->";
            for (auto j : i.second)
            {
                cout << j << ",";
            }
            cout << endl;
        }
    }
};
int main()
{

    int n;

    cout << "Enter the number of Nodes:" << endl;
    cin >> n;
    int m;
    cout << "ENter thee number of edges" << endl;
    cin >> m;
    graph g;
    for (int i = 0; i < m; i++)
    {
        int first, second;
        cin >> first >> second;
        g.addAdj(first, second, 1);
    }
    g.printAdj();
}
// 0 1
// 1 2
// 2 3
// 3 1
// 3 4
// 0 4