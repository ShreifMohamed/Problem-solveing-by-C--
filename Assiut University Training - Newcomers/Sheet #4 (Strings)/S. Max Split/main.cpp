#include <iostream>
#include <string>
#include <algorithm>

int main()
{

    char arr[1000][1000];
    std::string str;
    std::cin >> str;
    int row{0}, column{0},counter_R{0}, counter_L{0},counter{0};
    for(int i{0}; i < str.size(); i++)
    {   
        if(str[i] == 'R')
        {
            arr[row][column] = str[i];
            counter_R++;
        }
        else
        {
            arr[row][column] = str[i];
            counter_L++;
        }
        column++;
        if(counter_R == counter_L && counter_L > 0)
        {
            row++;
            column = 0;
            counter_L = 0;
            counter_R = 0;
            counter++;
        }
    }
    
    std::cout << counter << "\n";
    for(int i{0}; i < counter; i++)
    {
        std::cout << arr[i] << "\n";
    }
        return 0;
}