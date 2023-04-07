#include <iostream>
using namespace std;
int main()
{
    string s = "i am ssachin";
    string s1 = "@40";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            s.replace(i, 1, s1);
        }
        cout << s[i];
    }
}