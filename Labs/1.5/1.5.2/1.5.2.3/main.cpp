#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    int n;
    double x, y, z;
    const double pi = 3.14;
    cout << "Enter n: ";
    cin >> n;
    switch (n)
    {
        case 1: x = -7.2; y = 3.14; z = -2.5; break;
        case 2: x = -4; y = -3; z = 9.15; break;
        case 3: x = 3.14; y = -3.4; z = 0.59; break;
        default: cout << "Doesn't have such case!\n";
        return 0;
    }
    vector <double> nums(3);
    nums[0] = x;
    nums[1] = y;
    nums[2] = z;
    cout << "Number which absolutes are greater than Pi: ";
    for (auto item : nums)
    {
        if (abs(item) > pi)
        {
            cout << item << " ";
        }
    }
    return 0;
}
