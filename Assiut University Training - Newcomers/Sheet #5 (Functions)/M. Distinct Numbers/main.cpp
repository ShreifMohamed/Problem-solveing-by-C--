#include <iostream>
#include <algorithm>

void distinct_Numbers(int arr[], int size)
{
    std::sort(arr, arr + size);
    int counter{0};

    for(int i{0}; i < size; i++)
    {
        if(arr[i - 1] != arr[i])
        {
            counter++;
        }
    }
    std::cout << counter;
}

int main() 
{
    int size;
    std::cin >> size;
    int arr[size];

    for(int i{0}; i < size; i++)
    {
        std::cin >> arr[i];
    }

    distinct_Numbers(arr, size);
    return 0;
}

