#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    double a, x, y;
    const double pi = 3.14;
    cout << "Enter n: ";
    cin >> n;
    cout <<"Enter a, x separating by SPACE: ";
    cin >> a >> x;
    switch (n)
    {
        case 1: y = 2.5 * a + sin(x * x);
        break;
        case 2: y = pow(log10(abs(x + 1)), 2);
        break;
        case 3: y = tan(x - pi / 4);
        break;
        case 4: y = 2 * x + sin(x) / sqrt(x);
        break;
        default:
        {
            cout << "Don't have such case!";
            return 0;
        }
    }
    cout << "Y = " << y;
    return 0;
}
