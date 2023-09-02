#include <iostream>
using namespace std;
class A
{
public:
    void getA()
    {
        cout << "I Am A" << endl;
    }
};
class B
{
public:
    void getA()
    {
        cout << "I Am B" << endl;
    }
};
class c : public A, public B
{
};
int main()
{
    c c1;
    // not this
    // c1.getA()
    /////////////
    // use this
    c1.A::getA();
    c1.B::getA();
}