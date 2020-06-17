#include <iostream>

int main() {
    int size;
    std::cout << "Enter size of list: ";
    std::cin >> size;
    int *arr = new int[size];
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        std::cout << i + 1 << ". Enter element: ";
        std::cin >> arr[i];
        if (arr[i] > 20 && arr[i] % 3 == 0)
        {
            sum += arr[i];
        }
    }
    int count = 0;
    for (int i = 1; i < size - 1; i++) 
    {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
        {
            count += 1;
        }
    }
    std::cout << "Number of local maximums: " << count << std::endl;
    std::cout << "Sum equals " << sum;

    return 0;
}
