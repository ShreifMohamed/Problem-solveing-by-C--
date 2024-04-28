#include <iostream>
#include <string>
#include <algorithm>

int main() {
    
    std::string str1, str2{"hello"};
    std::cin>>str1;
    int i{0}, z{0};
    while (true)
    {
        if( i == str1.size() || z == str2.size())
        {
            break;
        }
        if(str1[i] == str2[z])
        {
            z++;
        }
        i++;
    }
    if(z == 5)
    {
        std::cout << "YES \n";
    }
    else
    {
        std::cout << "NO \n";
    }
    return 0;
}

