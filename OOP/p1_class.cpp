#include <iostream>
using namespace std;

class Hero
{

public:
    const int a = 5;
    Hero() // making the constructor
    {
        cout << "You calleed me!" << endl;
    }
    int getEle()
    {
        return a;
    }
};
int main()
{
    Hero h1;

    cout << "size is: " << h1.getEle() << endl;
}