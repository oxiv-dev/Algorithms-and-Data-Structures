#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double x, y;
    cout << "Enter x: ";
    cin >> x;
    if ( 2 *x + 3 == 0 || x + 4 == 0 || 2 * x + 3 ==0)
    {
        cout << "Incorrect output: zero division!";
    } else
    {
        y = ((x * x - 2 * x) / ((2 *x - 3) * (x + 4))) + ((pow(x, 1/3)) / 2 * x + 3);
        cout << "Y = " << y;
    }
    return 0;
}
