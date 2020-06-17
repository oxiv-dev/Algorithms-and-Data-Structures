#include <iostream>
using namespace std;
struct Stack
{
private:
    double* stack = new double();
    int size, num_of_el;
public:
    Stack(int n)
    {
        stack = new double(n);
        size = n;
        num_of_el = 0;
    }

    bool Full()
    {
        if (size == num_of_el) {
            cout << "Stack is full";
            return true;
        }
        else
            return false;
    }

    bool Empty()
    {
        if (num_of_el == 0) {
            cout << "Stack is empty";
            return true;
        }
        else
            return false;
    }

    void Push(int el)
    {
        if (!Full())
        {
            stack[num_of_el] = el;
            num_of_el++;
        }
    }

    double Pop()
    {
        if (!Empty())
        {
            num_of_el--;
            double res = stack[num_of_el];
            return res;
        }
    }
    void Print()
    {
        for(int i = num_of_el - 1; i >= 0; i--)
        {
            cout << stack[i] << '\t';
        }
    }
};
int main()
{
    int s, el, n;
    cout << "Enter lenght of stack: ";
    cin >> s;
    Stack S = Stack(s);
    cout << "Enter elements: ";
    for (int i = 0; i < s; i++)
    {
        cin>> el;
        S.Push(el);
    }
    cout << "1. Push\n2. Pop \n3. Full\n4. Empty\n5. Print";
    while (true)
    {
        cout << '\n' << "Choose operation: ";
        cin>> n;
        switch (n)
        {
            case 1: cout << "Enter element: ";
                cin >> el;
                S.Push(el);
                break;
            case 2: S.Pop();
                break;
            case 3: S.Full();
            break;
            case 4: S.Empty();
            break;
            case 5: S.Print();
            break;
            default: cout << "Try again!";
            break;
        }
        if (n == 0 )
        {
            break;
        }
    }
}