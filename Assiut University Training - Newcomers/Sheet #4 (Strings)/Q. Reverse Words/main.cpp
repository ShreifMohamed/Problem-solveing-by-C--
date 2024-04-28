#include <iostream>
#include <string>
#include <algorithm>
    
int main()
{
    std::string str;
    int flag{0};
    while (std::cin >> str)
    {
        std::reverse(str.begin(),str.end());
        if(flag)
        {
            std::cout << " ";
        }
        flag = 1;
        std::cout << str;
    }
    return 0;
}