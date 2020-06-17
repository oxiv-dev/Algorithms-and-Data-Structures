#include <iostream>
#include <math.h>
int main() {
    int row;
    std::cout << "Enter size of matrix:" << " ";
    std::cin >> row;
    int mult = 1;
    int mult_of_minus = 1;
    int count = 0;
    int **arr = new int *[row];
    for (int i = 0; i < row; i++) {
        arr[i]= new int [row];
        for (int j = 0; j < row; j++) {
            std::cout << "Enter element:" << " ";
            std::cin >> arr[i][j];
            //добуток для середнього геометричного
            if (arr[i][j]> 0)
            {
                mult *= arr[i][j];
                ++count;
            }
            //добуток від'ємних елементів
            else
            {
                mult_of_minus *= abs(arr[i][j]);
            }
        }
    }
    //середнє геометричне
    double med = pow(mult, ((double) 1/count));
    std::cout << "Medium geometric equals " << med << std::endl;
    std::cout << "Multiplication equals " << mult_of_minus << std::endl;
    std::cout << "Result is:" << " " << med + mult_of_minus << std::endl;
    for (int i = 0; i < row ; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}
