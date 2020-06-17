#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m_in;
    cout << "Enter size of connectivity matrix: ";
    cin >> m_in;
    const int m = m_in;
    int matr[m][m];
    cout << "Enter connectivity matrix: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matr[i][j];
        }
    }
    int sum = 0;
    vector <int> range(m-1);
    for (int k = 0; k < m; k++)
    {
        for (int i = 0; i < m; i++)
        {
            sum += matr[i][k];
        }
        for (int j = 0; j < m; j++)
        {
            if (k == j)
            {
                sum += 0;
            } else
            {
                sum += matr[k][j];
            }
        }
        range[k] = sum;
        sum = 0;
    }
    cout << "Node:    " << "Range:" << endl;
    for (int k = 0; k < m; k++)
    {
        cout << "    " << k+1 << "       " << range[k] << endl;
    }
    return 0;
}