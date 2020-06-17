#include <iostream>
using namespace std;
struct Queue
{
private:
    double* queue = new double();
    int size, num_of_el;
public:
    Queue(int n)
    {
        queue = new double(n);
        size = n;
        num_of_el = 0;
    }

    bool Full()
    {
        if (size == num_of_el) {
            cout << "Queue is full";
            return true;
        }
        else
            return false;
    }

    bool Empty()
    {
        if (num_of_el == 0) {
            cout << "Queue is empty";
            return true;
        }
        else
            return false;
    }

    void Push(int el)
    {
        if (!Full())
        {
            queue[num_of_el] = el;
            num_of_el++;
        }
    }

    double Pop()
    {
        if (!Empty())
        {
            for (int i = 0; i < num_of_el - 1; i++)
            {
                queue[i] = queue[i + 1];
            }
            num_of_el--;
            double res =queue[num_of_el];
            return res;
        }
    }
    void Print()
    {
        for(int i = 0; i <  num_of_el; i++)
        {
            cout << queue[i] << '\t';
        }
    }
};
int main() {
    int s, el, n;
    cout << "Enter lenght of queue: ";
    cin >> s;
    Queue Q = Queue(s);
    cout << "Enter elements: ";
    for (int i = 0; i < s; i++)
    {
        cin>> el;
        Q.Push(el);
    }
    cout << "1. Insert\n2. Remove \n3. Full\n4. Empty\n5. Print\n";
    while (true)
    {
        cout << "Choose operation: ";
        cin>> n;
        switch (n)
        {
            case 1: cout << "Enter element: ";
                cin >> el;
                Q.Push(el);
                cout << endl;
                break;
            case 2: Q.Pop();
                cout << endl;
                break;
            case 3: Q.Full();
                cout << endl;
                break;
            case 4: Q.Empty();
                cout << endl;
                break;
            case 5: Q.Print();
                cout << endl;
                break;
            default: cout << "Try again!" << endl;
                break;
        }
        if (n == 0 )
        {
            break;
        }
    }
    return 0;
}
