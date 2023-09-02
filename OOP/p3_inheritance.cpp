#include <iostream>
using namespace std;
// single inheritance
class Parent
{
public:
    int hair = 100;
    int looks = 100;
};
// Below code is the representation of mutli level inheritance
class Child : public Parent
{

public:
    int colour = 90;
};
class Child1 : public Child
{
public:
    int nothin = 1;
};
// Below code is the representation of "multiple inheritance"
class family
{
public:
    int familiMembers = 5;
};
class Child3 : public Child1, public family
{
public:
    int no = 8;
};
int main()
{
    Child3 c;
    cout << "Your hair is amazing " << c.familiMembers;
}