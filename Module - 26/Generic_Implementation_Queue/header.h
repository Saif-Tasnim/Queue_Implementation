#include <bits/stdc++.h>
using namespace std;

template <typename N>class Node
{
public:
    N value;
    Node *next;
    Node(N value)
    {
        this->value = value;
        next = NULL;
    }
};

template <typename Q> class Queue
{
    Node <Q> *front;
    Node <Q> *rear;

public:
    Queue()
    {
        front = NULL;
        rear = NULL;
    }

    // enqueue  ----> push

    void push(Q val)
    {
        Node <Q> *nn = new Node <Q> (val);
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

    Q pop()
    {
        Node <Q> *delNode = front;
        Q chk = delNode->value;
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

    Q front_value()
    {

        return front->value;
    }

    Q back_value()
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