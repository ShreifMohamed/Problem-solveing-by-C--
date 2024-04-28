#include <iostream>
#include <string>
#include <algorithm>

int main()
{

    char arr[1000][1000];
    std::string url;
    std::cin >> url;
    for(int i{0}; i < url.size(); i++)
    {   
        if(url[i] == '?')
        {
            i++;
            for(int j{i}; j < url.size(); j++)
            {
                if(url[j] == '=')
                {
                    std::cout << ": ";
                    continue;
                }
                if(url[j] == '&')
                {
                    std::cout << "\n";
                    continue;
                }
                std::cout << url[j];
            }
            break;
        }
    }
        return 0;
}