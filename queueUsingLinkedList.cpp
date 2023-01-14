#include<bits/stdc++.h>
using namespace std;

//Node class
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

//Queue class
class Queue{
    public:
    Node* front;
    Node* rear;

    Queue(){
        front = NULL;
        rear = NULL;
    }

    void push(int data){
        Node* temp = new Node(data);

        //condition for empty queue 
        if(rear == NULL){
            front = temp;
            rear = front;
            return;
        }
        //else make rear->next to temp and rear = temp
        else{
            rear->next = temp;
            rear = temp;
        }
    }

    int pop(){
        // for empty queue return -1
        if(front == NULL){
            return -1;
        }
        else{
            Node* temp = front;
            front = front->next;

            if(front == NULL){
                rear = NULL;
            }

            int ans = temp->data;
            delete temp;

            return ans;

        }
    }

    bool isEmpty(){
        if(front == NULL && rear == NULL){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    
    Queue q;

    q.push(12);

    q.push(56);

    q.push(90);

    cout<<q.pop()<<endl;

    if(q.isEmpty()){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }

    return 0;
}