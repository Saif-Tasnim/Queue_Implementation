#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        next = NULL;
    }
};

class Queue
{
    Node *front;
    Node *rear;

public:
    Queue()
    {
        front = NULL;
        rear = NULL;
    }

    // enqueue  ----> push

    void push(int val)
    {
        Node *nn = new Node(val);
        if (front == NULL)
        {
            front = nn;
            rear = nn;
        }
        else
        {
            rear->next = nn;
            rear = rear->next;
        }
    }

    // dequeue  ----> pop

    int pop()
    {
        Node *delNode = front;
        int chk = delNode->value;
        if (front == NULL)
        {
            cout << "\tQueue is Underflow\n";
           // return chk;
        }
        else{
        front = front->next;
        if (front == NULL)
        {
            rear = NULL;
        }
        delete delNode;
        }
        return chk;
    }

    // peak   -----> front() back()

    int front_value()
    {

        return front->value;
    }

    int back_value()
    {

        return rear->value;
    }

// empty   ----> empty()
    bool empty()
    {
        if (front == NULL && rear == NULL)
        {
            return true;
        }
        else
            return false;
    }

    // empty   ----> empty()
};