#include <iostream>
#include <string>
#include <algorithm>

int main() {
    int lenght{0};
    std::cin >> lenght;
    std::string str1;
    std::cin>>str1;
    char temp {' '};
    int counter{0};
    for(int i{0}; i < lenght; i++)
    {
        if( i == 0)
        {
            temp = str1[i];
            counter++;
        }
        else{

            if(str1[i] != temp)
            {
                temp = str1[i];
                counter++;
            }
        }
    }
        std::cout << counter;
    
    return 0;
}

