#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double V18, x;
    cout << "Enter x: ";
    cin >> x;
    const double e = 2.8;
    if (x == 0 || x == 1)
    {
        cout << "Incorrect input: x equals 1 or 0!";
    } else
    {
        V18 = sqrt(x * x + sin(sqrt(x) + 2 * x)) - (pow(e, (2 * x + sqrt(x))) / (pow(cos(x), 2) + pow(log10(log(x)), 2)));
        cout << "V18 = " << V18;
    }
    return 0;
}
