#include <iostream>
using namespace std;

//describes stack node
class StackNode {
public:
    int data;
    StackNode* next;
};

StackNode* newNode(int data) {
    StackNode* stackNode = new StackNode();
    stackNode->data = data;
    stackNode->next = nullptr;
    return stackNode;
}
//all functions named after same functions in stl
int isEmpty(StackNode *top)
{
    if (top == nullptr) {
        cout << "Stack is empty";
    }
    return !top;
}
bool Full(int n, int *c)
{
    if (*c == n)
    {
        cout << "Stack is full";
        return true;
    }
    else return false;
}

void Push(StackNode** top, int new_data, int n, int *c){
    if (!Full(n, c))
    {
        StackNode *stackNode = newNode(new_data);
        stackNode->next = *top;
        *top = stackNode;
        (*c)++;
        cout << "Item(" << new_data << ") has been pushed" << endl;
    }
}

int Pop(StackNode** top, int *c){
    if (isEmpty(*top))
        cout << "Stack is empty" << endl;
    StackNode* temp = *top;
    *top = (*top)->next;
    int popped = temp->data;
    free(temp);
    (*c)--;
    return popped;

}
int Top(StackNode* top)
{
    if (isEmpty(top))
        return -1;
    return top->data;
}
void Print(StackNode *top, int c)
{
    for (int i = 0; i < c; i++)
    {
        cout << Top(top) << '\t';
        Pop(&top, &c);
        c++;
    }
}

int main()
{
    StackNode* top = nullptr;
    cout<<"Enter size of stack: ";
    int num, el, count = 0;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cout << "Enter element: ";
        cin >> el;
        Push(&top, el, num, &count);
    }
    cout << "Choose operation:\n1. Push\n2. Pop\n3. Empty\n4. Top\n5. Full\n6. Print stack(only in the end of usage)\n0. Exit\n";
    int op = 1;
    while (true)
    {
        cout << "Choose operation: ";
        cin >> op;
        switch (op)
        {
            case 1: cout << "Enter element to push: ";
                cin >> el;
                Push(&top, el, num, &count);
                break;
            case 2: cout << "Item(" << Pop(&top, &count) << ") has been popped"<< endl;
                break;
            case 3: isEmpty(top);
                cout  << endl;
                break;
            case 4: cout << "Top of stack is: " << Top(top) << endl;
                break;
            case 5: Full(num, &count);
                cout << endl;
                break;
            case 6: Print(top, count);
            cout << endl;
                return 0;
            default: cout << "Wrong input" << endl;
                break;
        }
    }
}