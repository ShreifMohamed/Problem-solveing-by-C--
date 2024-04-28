#include <iostream>
#include <cmath>
#include <string>
    
int main()
{
    int arr[26]{0};
    int size{0};
    std::cin >> size;

    for(int i{0}; i < size; i++)
    {
        char c;
        std::cin >> c;
        arr[(int) c - 97]++;        
        
    }
    for(int j{0}; j <= 25; j++){
        while (arr[j] != 0)
        {
            std::cout << (char)(j + 97);
            arr[j]--;
        }
        
    }
    return 0;
}