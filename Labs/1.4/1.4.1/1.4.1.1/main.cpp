#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double fx, h = 0.1, fy;
    const double pi = 3.14;
    cout << '\t' << "x:" << '\t' << '\t' << "First function:" << '\t' << '\t' << "Second function:" << endl;
    for (double x = 0.5; x < 4.1; x += h)
    {
        fx = (x / 3.0) * (x / 3.0);
        fy = cos(x + pi / 3) + 1.8;
        cout << setw(4) << x << setw (20) << fx << setw(20) << fy << endl;
    }
    return 0;
}
