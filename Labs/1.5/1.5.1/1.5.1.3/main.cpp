#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    double n, sum = 0;
    vector <double> num (3);
    cout << "Enter three numbers separating by SPACE: ";
    for (int i = 0; i < 3; i++)
    {
        cin >> n;
        sum += n;
        num[i] = n;
    }
    double med;
    med = sum / 3;
    cout << "Numbers which absolutes are greater than arithmetical mean: ";
    int count = 0;
    for (auto item : num)
    {
        if (abs(item) > med)
        {
            cout << item << " ";
            count++;
        }
    }
    if (count == 0)
    {
        cout << "There are no numbers which greater than arithmetical mean";
    }
    return 0;
}