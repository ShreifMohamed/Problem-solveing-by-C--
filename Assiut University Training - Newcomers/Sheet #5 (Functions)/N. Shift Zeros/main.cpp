#include <iostream>
#include <algorithm>

void shift_Zeros(int size)
{
    int counter{0};

    for(int i{0}; i < size; i++)
    {
        int value;
        std::cin >> value;
        if(value == 0)
        {
            counter++;
        }
        else
            std::cout << value << " ";
    }
    for(int i{0}; i < counter; i++)
    {
        std::cout << "0" << " ";
    }
}

int main() 
{
    int size;
    std::cin >> size;

    shift_Zeros(size);
    return 0;
}

