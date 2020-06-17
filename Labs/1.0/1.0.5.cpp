#include <iostream>

int main() {
    int N = 6;
    for ( int i=0; i < N; i++)
    {
       if (i == 0 || i == 5)
       {
           std::cout << "1 1 . . 1 1" << std::endl;
       }
       else if (i == 1 || i == 4 )
       {
           std::cout << "  1 . . 1  " << std::endl;
       }
       else
       {
           std::cout<< "0   1 1   0" << std::endl;
       }
    }

    return 0;
}
