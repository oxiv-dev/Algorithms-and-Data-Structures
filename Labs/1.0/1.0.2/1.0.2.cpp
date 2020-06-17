#include <iostream>
#include <vector>
int main()
{
    size_t size;
    std::cout << "Enter size of list: ";
    std::cin >> size;
    std::vector<int> arr;
    for (size_t i = 0; i < size; i++)
    {
        int newElement;
        std::cout << "Enter element: ";
        std::cin >> newElement;
        if (i > 1 && newElement != arr[i - 1] && arr[i - 1] == arr[i - 2])
        {
            arr.push_back(0);
        }
        arr.push_back(newElement);
    }
    if (size > 1 && *(arr.end() - 1) == *(arr.end() - 2))
    {
        arr.push_back(0);
    }
    for (const auto & element : arr)
    {
        std::cout << element << " ";
    }
    return 0;
}