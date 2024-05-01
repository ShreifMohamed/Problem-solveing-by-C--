#include <iostream>
#include <iomanip>

void Shifting_of_array(int arr[], int size, int num_of_shifting)
{
    for(int i{size - num_of_shifting}; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    for(int i{0}; i < size - num_of_shifting; i++)
    {
        std::cout << arr[i] << " ";
    }
}

int main()
{
    int size, times;
    std::cin >> size >> times;
    
    int arr[size];
    
    for (int i{0}; i < size; i++)
    {
        std::cin >> arr[i];
    }
    int num_of_shifting = times % size;
    Shifting_of_array(arr, size, num_of_shifting);
    return 0;
}
