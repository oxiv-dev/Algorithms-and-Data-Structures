#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int k = 1, f;
    double x, prev = 0, curr = 0, dif, us, sum = 0;
    cout << "Enter accuracy: ";
    cin >> us;
    cout << "Enter x in diapasone (0,1): ";
    cin >> x;
    cout << "Number of elements:  ";
    cout << "Current element:  ";
    cout << "Previous element:  ";
    cout << '\n';
    do
    {
        f = 1;
        cout << '\t' << '\t' << k << '\t' << '\t';
        prev = curr;
        for (int i = 1; i <= k + 1; i++)
        {
           f *= i;
        }
        curr = (pow(-1, k) * pow(x, (3 * k - 1))) / (f * k * k);
        dif = curr - prev;
        k++;
        sum += curr;
        cout << '\t' << '\t' << curr << '\t' << '\t';
        cout << '\t' << '\t' << prev << '\t' << '\t';
        cout << '\n';

    } while (abs(dif) > us);
    cout << "Sum is: " << sum;
    return 0;
}