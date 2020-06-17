#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    double x, y, a, b, c;
    const double e = 2.8;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter x: ";
    cin >> x;
    switch (n) {
        case 1:
            a = 3.5;
            b = -0.73;
            c = 2.5;
            break;
        case 2:
            a = 5.4;
            b = -5.6;
            c = 3.5;
            break;
        case 3:
            a = 5.1;
            b = 4;
            c = 2.7;
            break;
        default:
            cout << "Doesn't nave such case!";
            return 0;
    }
    double st1, st2;
    st1 = abs(1 - x * x);
    st2 = a + c;
    if (st1 == st2) {
        y = sqrt(abs(a * x - pow(cos(b * b * b * b * x), 2) + 5.1 * c * c));
    } else if (st1 > st2) {
        y = pow(e, 0.04 * x) + log(abs(pow(b, 5) * cos(x)));
    } else
    {
        y = pow(cos(b * b * b * x * x), 2) + log(abs(b * x - a * a));
    }
    cout << "Y = " << y;
    return 0;
    }

