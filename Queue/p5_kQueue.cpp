#include <iostream>
#include <queue>
using namespace std;
class kQueue
{
public:
    int n;
    int k;
    int *arr;
    int *front;
    int *rear;
    int freespot;
    int *next;

    kQueue(int n, int k)
    {
        this->n = n;
        this->k = k;
        front = new int[k];
        rear = new int[k];
        for (int i = 0; i < k; i++)
        {
            front[i] = -1;
            rear[i] = -1;
        }
        next = new int[n];
        for (int i = 0; i < n; i++)
        {
            next[i] = i + 1;
        }
        next[n - 1] = -1;
        arr = new int[n];
        freespot = 0;
    }
    void enqueue(int data, int qn)
    {
        if (freespot == -1)
        {
            cout << "Spaace not available:" << endl;
            return;
        }
        // find first freee index
        int index = freespot;

        // update freespot
        freespot = next[index];

        // check whether first elemment
        if (front[qn - 1] == -1)
        {
            front[qn - 1] = index;
        }
        else
        {
            // link new element to the previos element
            next[rear[qn - 1]] = index;
        }

        // update nexxt
        next[index] = -1;

        // update rear
        rear[qn - 1] = index;

        // push elemnt
        arr[index] = data;
    }
    int dequeue(int qn)
    {
        // underflow check
        if (front[qn - 1] == -1)
        {
            cout << "underflow" << endl;
            return -1;
        }
        // find index to  pop
        int index = front[qn - 1];

        // front++
        front[qn - 1] = next[index];
        // manage freespot
        next[index] = freespot;
        freespot = index;
        return arr[index];
    }
};
int main()
{
    kQueue q(10, 3);
    q.enqueue(10, 1);
    q.enqueue(15, 1);

    q.enqueue(20, 2);
    q.enqueue(25, 1);
    cout << q.dequeue(1) << endl;
    cout << q.dequeue(2) << endl;
    cout << q.dequeue(1) << endl;
    cout << q.dequeue(1) << endl;
    cout << q.dequeue(1) << endl;
    return 0;
}
