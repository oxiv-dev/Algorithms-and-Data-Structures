#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double x, sum = 0;
    cout << "Enter x: ";
    cin >> x;
    const double e = 2.8;
    for (int k = 2; k <= 9; k++)
    {
       sum += tan(pow(e,x)) / (3 * k * k + 1);
    }
    cout <<"With \"for\" cycle: " << sum << endl;
    sum = 0;
    int k = 2;
    while (k <= 9)
    {
        sum += tan(pow(e,x)) / (3 * k * k + 1);
        k++;
    }
    cout <<"With \"while\" cycle: " << sum << endl;
    sum = 0;
    k = 2;
    do
    {
        sum += tan(pow(e,x)) / (3 * k * k + 1);
        k++;
    } while (k <= 9);
    cout <<"With \"do-while\" cycle: " << sum << endl;
    return 0;
}
