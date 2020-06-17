#include <iostream>
using namespace std;
int main() {
    int N, min = 0, plus = 0;
    for (int n = 1; n <= 12; n++)
    {
        cout << "Enter " << n << " number: ";
        cin >> N;
        if (N >= 0)
        {
            plus += 1;
        } else min += 1;
    }
    cout << "Number of elements which less than 0: " << min << endl;
    cout << "Number of elements which greater than 0: " << plus;
    return 0;
}
