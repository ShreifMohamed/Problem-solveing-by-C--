#include <iostream>
#include <iomanip>

void new_array(int arr1[], int arr2[], int size)
{
    for(int i{0}; i < size; i++)
    {
        std::cout << arr2[i] << " ";
    }
    for(int i{0}; i < size; i++)
    {
        std::cout << arr1[i] << " ";
    }
}

int main()
{
    int size;
    std::cin >> size;
    
    int arr1[size], arr2[size];
    
    for (int i{0}; i < size; i++)
    {
        std::cin >> arr1[i];
    }
    for (int i{0}; i < size; i++)
    {
        std::cin >> arr2[i];
    }
    
    new_array(arr1, arr2, size);
    return 0;
}
