#include <iostream>
using namespace std;

int main() {
    double x, y;
    cout << "Enter x: ";
    cin >> x;
    if (x <= -3)
    {
        y = 27 * x * x * x + 1;
    } else if (x > -3 && x < 5)
    {
        y = x - 2;
    } else
    {
        y = 3 * x + 1;
    }
    cout << "Y = " << y;
    return 0;
}
