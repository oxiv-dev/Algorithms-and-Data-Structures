
#include <iostream>

int main()
{
    bool done = false;
    int N = 0;
    int** arr = nullptr;
    do
    {
        std::cout << "Enter N > 0:\n";
        std::cin >> N;
            arr = new int* [N];
            for (int i = 0; i < N; ++i)
            {
                arr[i] = new int[N] {0};
            }
            int i = 0;
            for (; i < N / 2; ++i)
            {
                for (int j = i; j < N - i; ++j)
                {
                    arr[i][j] = 1;
                }
            }
            for (; i < N; ++i)
            {
                for (int j = N - i - 1; j <= i; ++j)
                {
                    arr[i][j] = 1;
                }
            }
            done = true;
        
    } while (!done);
    // OUTput matrix
    for (size_t i = 0; i < N; ++i)
    {
        for (size_t j = 0; j < N; ++j)
        {
            std::cout << arr[i][j] << ' ';
        }
        std::cout << '\n';
    }
    return 0;
}