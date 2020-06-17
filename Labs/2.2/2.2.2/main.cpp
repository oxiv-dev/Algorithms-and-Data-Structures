#include <iostream>
using namespace std;
void Print(int arr[], int size)
{
    for(int i = 0; i < size; ++i) cout << arr[i] << '\t';
    cout << endl;
}
//Partition defines pivot point, after which all elements are bigger
// and all elements before are smaller
int Partition(int arr[], int begin, int end, int& check, int& change, int n) //n for showing results
{
    int pivot = arr[end];
    int j = begin;
    for (int i = begin; i < end; i++)
    {
        check++;
        if (arr[i] <= pivot)
        {
            swap(arr[i], arr[j]);
            change++;
            j++;
        }
    }
    swap(arr[j], arr[end]);
    change++;
    Print(arr, n);
    return j;
}
//recursive call for sort function
void Sort(int arr[], int begin, int end, int& check, int& change, int n)
{
    if (begin < end)
    {
        int j = Partition(arr, begin, end, check, change, n);
        Sort(arr, begin, j - 1, check, change, n);
        Sort(arr, j + 1, end, check, change, n);
    }
}
int main() {
    int size, mode, check = 0, change = 0;
    cout << "Enter array size: ";
    cin >> size;
    int *arr = new int[size];
    cout << "0. Random fill\n1. Manual fill\nChoose mode: ";
    //mode for manual or random fill
    cin >> mode;
    switch(mode)
    {
        case 0:  for(int i = 0; i < size; ++i) arr[i] = rand()%100;
            cout << "Generated array: ";
            Print(arr, size);
            break;
        case 1:  cout << "Enter array: ";
            for(int i = 0; i < size; ++i) cin >> arr[i];
            break;
        default: break;
    }
    int beg, end;
    beg = 0;
    end = size - 1;
    Sort(arr, beg, end, check, change, size);
    cout << "Result: ";
    Print(arr, size);
    cout << "Number of checks: " << check << endl;
    cout << "Number of replaces: " << change << endl;
    return 0;
}
