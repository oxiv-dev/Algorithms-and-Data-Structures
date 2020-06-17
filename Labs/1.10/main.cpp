#include <iostream>
#include <cmath>
using namespace std;
class Figure
{
public:
    int Ax; int Ay;
    int Bx; int By;
    int Cx; int Cy;
    int Dx; int Dy;
    Figure()
    {
        Ax = 0; Ay = 0;
        Bx = 0; By = 0;
        Cx = 0; Cy = 0;
        Dx = 0; Dy = 0;
    }

    Figure(int ax, int ay, int bx, int by, int cx, int cy, int dx, int dy)
    {
        Ax = ax; Ay = ay;
        Bx = bx; By = by;
        Cx = cx; Cy = cy;
        Dx = dx; Dy = dy;
    }
    double Perimeter()
    {
        double p;
        p = sqrt((Bx - Ax) * (Bx - Ax) + (By - Ay) * (By - Ay)) * 4;
        return p;
    }
    double Area()
    {
        double A;
        A = (sqrt((Bx - Dx) * (Bx - Dx) + (By - Dy) * (By - Dy)) *
                sqrt((Ax - Cx) * (Ax - Cx) + (Ay - Cy) * (Ay - Cy))) /(double) 2;
        return A;
    }
    void Print_R()
    {
        cout << "A(lower left): (" << Ax << "," << Ay << ")" << "  |  ";
        cout << "B(upper left): (" << Bx << "," << By << ")" << "  |  ";
        cout << "C(upper right): (" << Cx << "," << Cy << ")" << "  |  ";
        cout << "D(lower right): (" << Dx << "," << Dy << ")" << endl;
    }

};
class Hash
{
private:
    int size;
    int num;
    bool *state;
    bool *last;
    Figure *value;
    int hash(double p)
    {
        return floor(size * (0.81 * p - floor(0.81 * p)));
    }
    int second_hash(double p, int i)
    {
        return (hash(p) + 2 * i + 3 * i * i) % size;
    }
public:
    Hash(int size)
    {
        this->size = size;
        this->value = new Figure[size];
        this->state = new bool[size];
        this->last = new bool[size];

        this->num = 0;
        for (int i = 0; i < size; i++)
        {
            state[i] = false;
            last[i] = true;
        }
    }
    bool is_full()
    {
        return this->size == this->num;
    }
    void add_element(Figure el)
    {
        int i = 0;
        if (!is_full())
        {
            int key1 = hash(el.Perimeter());
            while (state[key1])
            {
                last[key1] = false;
                key1 = second_hash(el.Perimeter(), i);
                i++;
                if (key1 >= size) key1 %= size;
            }
            this->value[key1] = el;
            this->state[key1] = true;
            this->num++;
        }
    }
    void print()
    {
        cout << "Hash   KEY           Coordinates" << endl;
        for (int i = 0; i < size; i++)
        {
            if (state[i])
            {
                cout << i << "  |  " << value[i].Perimeter() << "  |  ";
                value[i].Print_R();
                cout << endl;
            }
        }
    }

    void print_el(int key)
    {

        value[key].Print_R();
        cout << endl;
    }
};


int main() {
    int n;
    cout << "Enter size of table: ";
    cin >> n;
    Hash hash(n);
    Figure my_f(-7, 7, 7, 7, 7, 0, -7, 0);
    Figure another_f(-13, 13, 13, 13, 13, 0, -13, 0);
    Figure third_f(0, 0, 0, 4, 4 , 4 , 4, 0);
    cout << "TEST FIGURE" << endl;
    cout << "Perimeter " << my_f.Perimeter() << endl;
    cout << "Area " << my_f.Area() << endl;
    cout << "Coordinates: ";
    my_f.Print_R();

    cout << endl;
    hash.add_element(third_f);
    hash.add_element(my_f);
    hash.add_element(another_f);
    hash.add_element(my_f);
    hash.add_element(my_f);
    hash.print();
    cout << "Search by number 13" << endl;
    hash.print_el(13);

    return 0;
}
