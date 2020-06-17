#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int k;
    double mult, sum;
    cout << "Enter k: ";
    cin >> k;
    mult = 1;
    sum = 0;
    double resm, fin;
    for (int i = 1; i <= k; i++)
    {
        for (int n = 1; n <= 2 + k; n++)
        {
            if (n != i)
            {
                mult = 1;
                resm = (n + 0.8) / (n - i);
                mult *= resm;
            }
        }
        if (i != 3 && i != 4)
        {
            sum += (pow((i - 4.0), i) / ((3.0 - i) * (3.0 - i))) * mult;
        }
    }
    cout << "Y = " << sum;
    return 0;
}
