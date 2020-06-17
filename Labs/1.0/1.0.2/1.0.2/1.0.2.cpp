#include <iostream>
#include <vector>
int main() {
    int size;
    std::cout << "Enter size of list: ";
    std::cin >> size;
    int* arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter element:" << " ";
        std::cin >> arr[i];
    }
    std::vector<int> new_array(2 * size);
    int rep = 0;
    int k = 0;
    for (int i = 0; i < (2 * size) - 1; i++) 
    {
        for (rep = 0; arr[i] == arr[i + 1]; ++rep)
        {
            new_array[i + k] = arr[i];
        }
        if (rep > 0)
        {
            new_array[i + k] = arr[i];
            k++;
            rep = 0;
        }
        new_array[i + k] = arr[i];
    }
    for (int i = 0; i < 2 * size; i++)
    {
        std::cout << new_array[i] << " ";
    }
    return 0;
}