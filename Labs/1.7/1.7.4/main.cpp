#include <iostream>
using namespace std;

struct QNode {
    int data;
    QNode* next;
    QNode(int d)
    {
        data = d;
        next = nullptr;
    }
};

struct Queue {
    QNode *front, *rear;

    Queue() {
        front = rear = nullptr;
    }

    int Insert(int x, int *c)
    {
        QNode *temp = new QNode(x);
        if (rear == nullptr)
        {
            front = rear = temp;
        }
        rear->next = temp;
        rear = temp;
        (*c)++;
    }
    void Remove(int *c)
    {
        if (front == nullptr)
            return;
        QNode *temp = front;
        front = front->next;
        if (front == nullptr)
            rear = nullptr;
        (*c)--;

        delete (temp);
    }
    bool Empty(int *c)
    {
        if (*c == 0)
        {
            cout << "Queue is empty";
            return true;
        } else return false;
    }
    bool Full(int c, int n )
    {
        if (c == n)
        {
            cout << "Queue is full";
            return true;
        }
        else return false;
    }
};

int main()
{
    Queue q;
    cout << "Enter size of queue: ";
    int num, el , count = 0, op = 1;
    cin >> num;
    for(int i = 0; i < num; i++)
    {
        cout << "Enter element: ";
        cin >> el;
        q.Insert(el, &count);
    }
    cout << "1. Insert\n2. Remove\n3. Full\n4. Empty\n5. Top\n6. Bottom\n";
    while(op != 0)
    {
        cout << "Chose operation: ";
        cin >> op;
        switch (op)
        {
            case 1: if (!q.Full(count,num))
                {
                    cout << "Enter element: ";
                    cin >> el;
                    q.Insert(el, &count);
                }
                else
                {
                    cout << "Queue is full" << endl;
                }
                break;
            case 2: if (!q.Empty(&count))
                {
                    q.Remove(&count);
                    cout << "Item has been removed" << endl;
                }
                else
                {
                    cout << "Queue is empty" << endl;
                }
                break;
            case 3: q.Full(count, num);
                cout << endl;
                break;
            case 4: q.Empty(&count);
                cout << endl;
                break;
            case 5: if (!q.Empty(&count))
                {
                    cout << "Queue Front: " << (q.front)->data << endl;
                }
                else
                {
                    cout << "Queue is empty" << endl;
                }
                break;
            case 6: if (!q.Empty(&count))
                {
                    cout << "Queue Bottom: " << (q.rear)->data << endl;
                }
                else
                {
                    cout << "Queue is empty" << endl;
                }
                break;
            default: cout << "Wrong input" << endl;
                break;
        }
    }
}
