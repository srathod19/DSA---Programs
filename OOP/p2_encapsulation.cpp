#include <iostream>
using namespace std;
// this structur is called encaapsulation
class Me
{
public:
    int a = 10;
};
int main()
{
    Me i;
    cout << "My value is: " << i.a;
}