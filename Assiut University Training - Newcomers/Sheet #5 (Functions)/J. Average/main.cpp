#include <iostream>
#include <iomanip>

void average_of_array(double arr[], int size)
{
    long double result{0};
    for(int i{0}; i < size; i++)
    {
        result += arr[i];
    }
    std::cout << std::fixed << std::setprecision(7) << result / size;
}
int main()
{
    int size;
    std::cin >> size;
 
    double arr[size];
    
    for (int i{0}; i < size; i++)
    {
        std::cin >> arr[i];
    }

    average_of_array(arr, size);
    return 0;
}
