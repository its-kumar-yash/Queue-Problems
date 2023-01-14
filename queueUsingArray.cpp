#include <bits/stdc++.h> 
using namespace std;

class Queue {
    //data members
    int *arr;
    int qfront;
    int rear;
    int size;

    public:

    //defining behaviour
    Queue() {
        size = 100001;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if(qfront == rear){
            return true;
        }
        else{
            return false;
        }
    }

    void enqueue(int data) {
        //check for overflow condition
        if(rear == size){
            return;
        }
        else{
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {
        if(isEmpty()){
            return -1;
        }
        else{
            //save front value and move front to forward position
            int val = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            //for space utilization
            if(qfront == rear){
                qfront = 0;
                rear = 0;
            }
            return val;
        }
    }

    int front() {
        if(isEmpty()){
            return  -1;
        }
        else{
            return arr[qfront];
        }
    }
};