#include <bits/stdc++.h>
using namespace std;

class Deque
{
    // data members
    int *arr;
    int size;
    int front;
    int rear;

public:
    // Initialize your data structure.
    Deque(int n)
    {
        size = n;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x)
    {
        // base case - queue is full
        if (isFull())
        {
            return false;
        }
        // condition 2 - first element to push
        else if (front == -1)
        {
            front = rear = 0;
        }
        // condition 3 - circular nature
        else if (front == 0 && rear != size - 1)
        {
            front = size - 1;
        }
        // condition 4 - normal flow
        else
        {
            front--;
        }

        arr[front] = x;
        return true;
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
        // base case - queue is full
        if (isFull())
        {
            return false;
        }
        // condition 2 - first element to push
        else if (front == -1)
        {
            front = rear = 0;
        }
        // condition 3 - circular nature
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
        }
        // condition 4 - normal flow
        else
        {
            rear++;
        }

        arr[rear] = x;
        return true;
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
        // base case - queue is empty
        if (isEmpty())
        {
            return -1;
        }

        int val = arr[front];
        arr[front] = -1;

        // condition 2 - single element present in queue
        if (front == rear)
        {
            front = rear = -1;
        }
        // condition 3 - cyclic nature
        else if (front == size - 1)
        {
            front = 0;
        }
        // condition 4 - normal flow
        else
        {
            front++;
        }

        return val;
    }

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
        // base case - queue is empty
        if (isEmpty())
        {
            return -1;
        }

        int val = arr[rear];
        arr[rear] = -1;

        // condition 2 - single element present
        if (front == rear)
        {
            front = rear = -1;
        }
        // condition 3 - cyclic order
        else if (rear == 0)
        {
            rear = size - 1;
        }
        // condition 4 - normal flow
        else
        {
            rear--;
        }

        return val;
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
        if (isEmpty())
        {
            return -1;
        }
        else
        {
            return arr[front];
        }
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
        if (isEmpty())
        {
            return -1;
        }
        else
        {
            return arr[rear];
        }
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
        if (front == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
        if ((front == 0 && rear == size - 1) || (front != 0 && rear == (front - 1) % (size - 1)))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};