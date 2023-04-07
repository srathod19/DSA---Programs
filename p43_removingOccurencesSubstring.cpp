#include <iostream>
using namespace std;
int main()
{
    string s = "abababcababcabababc";
    string s1 = "abc";
    for (int i = 0; i < s.length() || i < s1.length(); i++)
    {
        cout << s[i] << " ";
        cout << endl;
        cout << s1[i] << " ";
        // if(s[i] == s1[i]){

        // }
    }
}