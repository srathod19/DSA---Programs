#include <iostream>
using namespace std;
class Queue
{
    int *arr;
    int qfront;
    int size;
    int rear;

public:
    Queue()
    {
        size = 10000;
        arr = new int[size];
        int qfront = 0;
        int rear = 0;
    }
    void isEmpty()
    {
        if (qfront == rear)
        {
            cout << "queue iis empty" << endl;
        }
    }
    void enqueue(int data)
    {
        if (rear != size)
        {
            arr[rear] = data;
            rear++;
        }
        else
        {
            cout << "Queue is full" << endl;
        }
    }
    void dequeue()
    {
        if (rear == qfront)
        {
            cout << "Queueu is empty" << endl;
        }
        else
        {
            // int ans = arr[front]; //for returning answer
            arr[qfront] = -1;
            qfront++;
            if (qfront == rear)
            {
                qfront = 0;
                rear = 0;
            }
        }
    }
};
int main()
{
    Queue q;
    q.enqueue(2);
    q.enqueue(3);
    cout <<
}