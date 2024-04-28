#include <iostream>
#include <cmath>
#include <string>
    
int main()
{
    std::string str, res;
    std::getline(std::cin , str);
    int counter{0};
    for(int i{0}; i < str.size(); i++)
    {
        if(str[i] != 32 && str[i] != '!' && str[i] != '.' && str[i] != ',' && str[i] != '?')
        {
            res += str[i];
        }    
        if((str[i] == 32 || str[i] == '!' || str[i] == '.' || str[i] == ',' || str[i] == '?' || i == str.size() - 1) && res.size() != 0)
        {
            counter++;
            res = "";
        }
    }
    std::cout << counter;
    return 0;
}