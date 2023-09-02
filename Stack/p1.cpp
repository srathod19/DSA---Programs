#include <iostream>
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    // creting stack
    stack<int> s;
    s.push(2);
    s.push(4);
    s.pop();
    cout << s.top() << " ";
}