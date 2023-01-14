#include <bits/stdc++.h>
using namespace std;

class CircularQueue{
    
    //data members
    int *arr;
    int front;
    int rear;
    int size;
    
    public:
    CircularQueue(int n){
        //initialization
        size = n;
        arr = new int[n];
        front = -1;
        rear = -1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        //base case - if queue is full
        if((front == 0 && rear == size - 1) || rear == (front - 1)%(size - 1) ){
            return false;
        }
        //condition for - first element to insert
        else if(front == -1){
            front = 0;
            rear = 0;
        }
        //condition for - rear at last index and front is not at first index - circular flow
        else if(rear == size - 1 && front != 0){
            rear = 0;
        }
        //condition for - normal flow
        else{
            rear++;
        }
        
        arr[rear] = value;
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        //base case
        if(front == -1){
            return -1;
        }
        int val = arr[front];
        arr[front] = -1;
        //condition for - single element present in the queue
        if(front == rear){
            front = -1;
            rear = -1;
        }
        //condition for - front at end when rear is not at first - circular flow
        else if(front == size - 1){
            front = 0;
        }
        //condition for - normal flow
        else{
            front++;
        }
        
        return val;
    }
};