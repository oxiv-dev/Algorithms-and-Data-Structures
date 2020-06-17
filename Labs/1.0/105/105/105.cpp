
#include <iostream>

int main()
{
    int N;
    std::cout << "Enter size of matrix:";
    std::cin >> N;
    int step = (N + 1) / 2;
    //generating matrix
    int** arr = new int* [N];
    for (int i = 0; i < N; i++)
    {
        arr[i] = new int[N];
        for (int j = 0; j < N; j++)
        {
            arr[i][j] = 1;
        }
    }
        for (int i = 0; i < N; i++)
        {
            if ( i < step)
            {
                for (int j = 0; j < N; j++)
                {
                    while (i > 0)
                    {
                        arr[i][j] = 0;
                        arr[i][N - 1 - j] = 0;
                        i--;
                    }
                }
            }
            else
            {
                for (int j = 0; j < N; j++)
                {
                    while ( i < N)
                    {
                        arr[i][j] = 0;
                        arr[i][N - 1 - j] = 0;
                        i++;
                    }
                }
            }
        }
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                std::cout << arr[i][j] << "\t";
            }
            std::cout << std::endl;
        }

        return 0;
}


