#include <iostream>
using namespace std;
struct List
{
private:
    int *list = nullptr;
    int size, num;
public:
    List(int s)
    {
        list = new int(s);
        size = s;
        num = 0;
    }
    void Push(int el)
    {
        if (num < size)
        {
            list[num] = el;
            num++;
            cout << "Element has been pushed" << endl;
        } else
        {
            cout << "List is full" << endl;
        }
    }
    //
    void Insert(int el, int dx)
    {
        if (num <= size - 1)
        {
            for(int i = num; i > dx - 1; i--)
            {
                list[i] = list[i - 1];
            }
            list[dx - 1] = el;
            num++;
        }
    }
    void Print()
    {
        for(int i = 0; i < num; i++)
        {
            cout << list[i] << '\t';
        }
        cout << endl;
    }
    void Pop()
    {
        if (num > 0)
        {
            list[num] = 0;
            num--;
        }
    }
    void Delete(int el)
    {
        if(num > 0)
        {
            int ok = 0, pos;
            for(int i = 0; i < num; i++)
            {
                if (el == list[i])
                {
                    pos = i;
                    ok++;
                }
            }
            if (ok == 0)
            {
                cout << "This element not in list";
            }
            for (int i = pos; i < num; i++)
            {
                list[i] = list[i + 1];
            }
            list[num] = 0;
            num--;
        }
    }
    void Find(int el)
    {
        int ok = 0;
        for(int i = 0; i < num; i++)
        {
            if (el == list[i])
            {
                cout << el << " on the " << i+1 << " position" << endl;
                ok++;
            }
        }
        if (ok == 0)
        {
            cout << "This element not in list";
        }

    }
    void Sort()
    {
        int k = 1, buf;
        while(k != 0)
        {
            k = 0;
            for(int i = 1; i < num; i++)
            {
                if(list[i] < list[i - 1])
                {
                    buf = list[i - 1];
                    list[i - 1] = list[i];
                    list[i] = buf;
                    k++;
                }
            }
        }
    }
    void PushSort(int el)
    {
        Sort();
        Push(el);
        Sort();
    }
};
int main() {
    int op = 1, el, dx, size;
    string name;
    cout << "1. Add element\n2. Insert element\n3. Delete element\n4. Delete element from the end of list\n5. Find element\n"
            "6. Sort list\n7. Insert element in sorted list\n8 Show elements\n0. Exit\n";
    cout << "Enter size of list: ";
    cin >> size;
    List f = List (size);
    while (op != 0)
    {
        cout << "Choose operation: ";
        cin >> op;
        switch (op)
        {
            case 1: cout << "Enter element: ";
                cin >> el;
                f.Push(el);
                break;
            case 2: cout << "Enter element: ";
                cin >> el;
                cout << "Enter the position to insert: ";
                cin >> dx;
                f.Insert(el, dx);
                break;
            case 3: cout << "Enter element: ";
                cin >> el;
                f.Delete(el);
                break;
            case 4: f.Pop();
                break;
            case 5: cout << "Enter element: ";
                cin >> el;
                f.Find(el);
                break;
            case 6: f.Sort();
                cout << "Result: " << endl;
                f.Print();
                break;
            case 7: cout << "Enter element: ";
                cin >> el;
                f.PushSort(el);
                cout << "Result: " << endl;
                f.Print();
                break;
            case 8: f.Print();
            default: break;
        }
    }
    return 0;
}
