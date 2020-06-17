#include <iostream>

int main() {
    int row;
    std::cout << "Enter size of matrix:";
    std::cin >> row;
    //generating matrix
    int **arr = new int *[row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[row];
        for (int j = 0; j < row; j++)
        {
            std::cout << "Enter element:";
            std::cin >> arr[i][j];
        }
    }
    //create copy of matrix
    int** copy = new int* [row];
    for (int i = 0; i < row; i++)
    {
        copy[i] = new int[row];
        for (int j = 0; j < row; j++)
        {
            copy[i][j] = arr[i][j];
        }
    }
    // output matrix

    std::cout << "Original matrix\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            std::cout << arr[i][j] << "\t";
        }
        std::cout << std::endl;
    }
    //modifying matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            copy[j][row -1 - i]=arr[i][j];
        }
    }
    //output of mod matrix
    std::cout << "Modified matrix\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            std::cout << copy[i][j] << "\t";
        }
        std::cout << std::endl;
    }
    return 0;
}
