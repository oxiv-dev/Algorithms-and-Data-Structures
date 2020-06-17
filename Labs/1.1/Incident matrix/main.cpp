#include <iostream>
using namespace std;

int main() {
const int M = 100;
const int N = 100;
int m_in;
cout << "Enter number of nodes: ";
cin >> m_in;
cout << endl;
const int m = m_in;
int matr[m][m];
for(int i = 0; i < m; i++)
{
    for(int j = 0; j < m; j++)
    {
        cout << "Enter elemets of matrix: ";
        cin >> matr[i][j];
        cout << endl;
    }
}
int k = 0;
int incid [M][N] {0};
for (int elem = 0; elem < m * m; elem++)
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if (matr[i][j] > 0 && i != j)
            {
                while (matr[i][j] > 0)
                {
                    incid[k][i] = -1;
                    incid[k][j] = 1;
                    matr[i][j] -= 1;
                    k++;
                }
            } else if (matr[i][j] > 0 && i == j)
            {
                while (matr[i][j] > 0)
                {
                    incid[k][i] = 2;
                    matr[i][j] -= 2;
                    k++;
                }
            }
        }
    }
}
cout << "Incident matrix: " << endl;
for (int y = 0; y < k; y++)
{
    for(int x = 0; x < m; x++)
    {
        cout << incid[y][x] << "  ";
    }
    cout << endl;
}
  return 0;
}