#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double S, y, t;
    cout << "Enter y, t separating by SPACE: ";
    cin >> y >> t;
    if (t <= 0)
    {
        cout << "Incorrect input: t less or equal 0!";
    } else
    {
        if (sqrt(cos(2 * y) + 1) == 0)
        {
            cout << "Incorrect input: zero division!";
        } else
        {
            S = (4.351 * y * y * y + 2 * t * log(t))/ sqrt(cos(2 * y) + 1);
            cout << "S = " << S;
        }
    }
    return 0;
}
