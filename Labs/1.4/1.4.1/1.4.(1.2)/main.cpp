#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main() {
    int k = 1, f;
    double x, prev, curr = 0, dif, sum = 0;
    cout << "Enter x: ";
    cin >> x;
    const double accur = pow(10, -4.0);
    cout << setw(3) << "k:" << setw(15) << "Current item:" << setw(15) << "Previous item:" << setw(15) << "Difference:" << endl;
    do
    {
        f = 1;
        prev = curr;
        for (int i = 1; i <= k + 1; i++)
        {
            f *= i;
        }
        curr = (pow(-1.0, k - 1) * pow(x, 3.0 * k + 1)) / ((3.0 * k) * f);
        dif = prev - curr;
        sum  += curr;
        cout << setw(3) << k << setw(15) << curr << setw(15) << prev << setw(15) << dif << endl;
        k++;
    } while (abs(dif) > accur);
    cout << "Sum is " << curr;
    return 0;
}