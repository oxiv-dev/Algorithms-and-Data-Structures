#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double xa, ya, xb, yb, xc, yc;
    cout << "Enter coordinates (A, B, C): ";
    cin >> xa >> ya;
    cin >> xb >> yb;
    cin >> xc >> yc;
    double ab, ac, bc;
    ab = sqrt((xb - xa) * (xb - xa) + (yb - ya) * (yb - ya));
    ac = sqrt((xc - xa) * (xc - xa) + (yc - ya) * (yc - ya));
    bc = sqrt((xc - xb) * (xc - xb) + (yc - yb) * (yc - yb));
    double p;
    p = ab + ac + bc;
    cout << "Perimeter is: " << p;
    return 0;
}
