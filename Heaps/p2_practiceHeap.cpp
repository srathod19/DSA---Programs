#include <iostream>
#include <queue>
using namespace std;
class heap
{
public:
    int arr[100];
    int size;
    heap()
    {
        arr[0] = -1;
        size = 0;
    }
    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;
        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }
    void print()
    {
        for (int i = 1; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void del()
    {
        if (size == 0)
        {
            cout << "Nothing to delete here" << endl;
            return;
        }
        arr[1] = arr[size];
        size--;
        int i = 1;
        while (i < size)
        {
            int leftIndex = 2 * i;
            int rightIndex = 2 * i + 1;
            if (leftIndex < size && arr[i] < arr[leftIndex])
            {
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }
            else if (rightIndex < size && arr[i] < arr[rightIndex])
            {
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }
            else
            {
                return;
            }
        }
    }
};
void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;
    if (left <= n && arr[largest] < arr[left])
    {
        largest = left;
    }
    if (right <= n && arr[largest] < arr[right])
    {
        largest = right;
    }
    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}
void heapSort(int arr[], int n)
{
    int size = n;
    while (size > 1)
    {
        // step 1: sswap
        swap(arr[size], arr[1]);
        size--;

        // step 2
        heapify(arr, size, 1);
    }
}
int main()
{
    heap h;
    h.insert(1);
    h.insert(2);
    h.insert(3);
    h.insert(4);
    h.insert(5);
    h.insert(6);
    h.print();
    h.del();
    h.print();
    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;
    // heapify
    // for (int i = n / 2; i > 0; i--)
    // {
    //     heapify(arr, n, i);
    // }
    cout << " printing after heapify" << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // heapSort`
    heapSort(arr, n);

    cout << "HeapSort" << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // using priority_queue

    cout << "using priority queue -- Maxheap --  " << endl;
    // max heap
    priority_queue<int> pq;
    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);
    cout << "elemenet aat top : " << pq.top() << endl;
    pq.pop();
    cout << "elemenet aat top : " << pq.top() << endl;
    // min heap
    cout << "Min heap" << endl;
    priority_queue<int, vector<int>, greater<int>> minHeap;
    minHeap.push(4);
    minHeap.push(2);
    minHeap.push(5);
    minHeap.push(3);
    cout << "elemenet aat top : " << minHeap.top() << endl;
    minHeap.pop();
    cout << "elemenet aat top : " << minHeap.top() << endl;
}
