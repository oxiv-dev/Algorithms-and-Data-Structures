#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double x, sum = 0;
    const double pi = 3.14;
    cout << "Enter x: ";
    cin >> x;
    double f = 1, u;
    for (int i = 1; i <= 6; i++)
    {
        f *= i;
        u = tan(pow(x + pi, 2)) / f;
        sum += u;
    }
    cout << "Sum = " << sum;
    return 0;
}
