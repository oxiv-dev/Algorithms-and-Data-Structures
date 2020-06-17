#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    double a;
    vector <double> arr;
    cout << "Enter element: ";
    do
    {
        cin >> a;
        arr.push_back(a);
    }
    while (a != 0);
    double min_dif = 50, dif, item1 = 0, item2 = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if (i != j)
            {
                dif = arr[i] - arr[j];
                if (abs(dif) < min_dif)
                {
                    min_dif = abs(dif);
                    item1 = arr[i];
                    item2 = arr[j];
                }
            }
        }
    }
    cout << item1 << '\t' << item2;
    return 0;
}
