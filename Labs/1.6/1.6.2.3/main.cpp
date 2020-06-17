#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter n > 0: ";
    cin >> n;
    cout << "Result: ";
    for (int i = 0; i <= n; i++)
    {
        if (i % 5 == 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}
