#include <iostream>
using namespace std;
char toLowerCase(char ch)
{

    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        int temp = ch - 'A' + 'a';
        return temp;
    }
}
int getLength(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int reverseString(char arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        if (toLowerCase(arr[start++]) != toLowerCase(arr[end--]))
        {
            cout << "string is not pelindrome" << endl;
            break;
        }
        else
        {
            cout << "string is pelindrome" << endl;
            break;
        }
        swap(arr[start++], arr[end--]);
    }
}

int main()
{
    char arr[10] = "Absba";
    int len = getLength(arr);
    // char ch = reverseString(arr, len);
    reverseString(arr, len);
    cout << arr << endl;
}