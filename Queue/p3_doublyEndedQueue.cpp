#include <iostream>
#include <queue>
using namespace std;
class Deque
{
    int *arr;
    int front;
    int rear;
    int size;

public:
    Deque(int n)
    {
        size = n;
        arr = new int[size];
        front = rear = -1;
    }
    bool pushFront(int x)
    {
        if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1)))
        {
            return false;
        }
        else if (front == -1)
        {
            front = rear = 0;
        }
        else if (front == 0)
        {
            front = size - 1;
        }
        else
        {
            front--;
        }
        arr[front] = x;
        return true;
    }
    bool pushRear(int x)
    {
        if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1)))
        {
            return false;
        }
        else if (front == -1)
        {
            front = rear = 0;
        }
        else if (front == size - 1 && front != 0)
        {
            rear = 0;
        }
        else
        {
            rear++;
        }
        arr[front] = x;
        return true;
    }
    int popFront()
    {
    }
    int popBack()
    {
    }
};
int main()
{
    deque<int> d;
    d.push_front(1);
    d.push_back(2);
    d.push_front(4);
    cout << d.front() << endl;
    cout << d.back() << endl;
}
