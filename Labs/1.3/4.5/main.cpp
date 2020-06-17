#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double m, c, x, y;
    const double k = 2;
    const double e = 2.8;
    double p = 1.0/3.0;
    cout << "Enter m: ";
    cin >> m;
    c = pow(cos(m), 2) + k * k;
    x = pow (e, m * k);
    y = pow((x * x + c * c), p);
    cout << "Y = " << y;
    return 0;
}
