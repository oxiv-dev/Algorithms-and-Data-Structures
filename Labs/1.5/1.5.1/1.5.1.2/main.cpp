#include <iostream>
#include <cmath>
using namespace std;

int main() {
const double e = 2.8;
const double a = 0.7;
const double b = 2.3;
double x, y, z;
cout << "Enter x: ";
cin >> x;
z = pow((a + b), 2);
double st1, st2;
st1 = pow(e, a + b);
st2 = pow(e, x);
if (st1 > st2)
{
    y = sin(st1) + x * x;
} else if (st1 == st2)
{
    y = atan(a * x * b) + pow(x, 1.0 / 3.0);
} else
{
    y = cos(sqrt(abs(x + a * b * z)));
}
cout << "Y = " << y;
   return 0;
}