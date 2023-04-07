#include <iostream>
using namespace std;
int main()
{
    string s = "axxz";

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == s[i + 1])
        {
            s.erase(i, 2);
            i = -1;
        }
    }

    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i];
    }
}