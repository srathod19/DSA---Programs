#include <iostream>
using namespace std;
bool pelindrome(string name, int i, int j)
{
    if (i > j)
        return false;
    if (name[i] == name[j])
    {
        i++;
        j--;
        pelindrome(name, i, j);
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string name = "abcba";
    bool ans = pelindrome(name, 0, name.length() - 1);
    if (ans)
    {
        cout << "is pelindrome";
    }
    else
    {
        cout << "is nt pelindrome";
    }
}