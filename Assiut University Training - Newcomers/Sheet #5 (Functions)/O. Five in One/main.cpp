#include <iostream>
#include <algorithm>
#include <cmath>

void Max_and_Min(int arr[], int size)
{
    std::sort(arr, arr + size);
    std::cout << "The maximum number : " << arr[size - 1] << "\nThe minimum number : " << arr[0] << "\n";
}

bool Plindrome_numbers(int num)
{
    int temp = num;
    
    int d{0}, sum{0};
    while (num > 0)
    {
        d = num % 10;
        sum = (sum * 10) + d;
        num /= 10;
    }
    if(temp == sum)
        return true;
    else
        return false;
}

int Count_divisor(int num)
{
    int counter{0};
    int m = num / 2;
    for(int i{1}; i <= m; i++)
    {
        if(num % i == 0)
        {
            counter++;
        }
    }
    return counter;
}

void Prime_numbers(int arr[], int size)
{
    std::sort(arr, arr + size);
    int countPrime{0}, countPlindrome{0};
    for(int i{0}; i < size; i++)
    {
        if(Plindrome_numbers(arr[i]))
        {
            countPlindrome++;
        }

        int m = arr[i] / 2;
        int flag{0};
        for(int j{2}; j <= m; j++)
        {
            if(arr[i] % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0 && arr[i] != 1)
            countPrime++;
    }
    std::cout << "The number of prime numbers : " << countPrime << "\n";
    std::cout << "The number of palindrome numbers : " << countPlindrome << "\n";
    int c{0}, max{0}, index{0};
    for(int i{0}; i < size; i++)
    {
        c = Count_divisor(arr[i]);
        if(i == 0)
        {
            max = c;
            index = i;
        }
        else
        {
            if(c >= max)
            {
                max = c;
                index = i;
            }
        }
    }
    std::cout << "The number that has the maximum number of divisors : " << arr[index] << "\n";
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
    
    Max_and_Min(arr,size);
    Prime_numbers(arr,size);
    return 0;
}

