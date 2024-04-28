#include <iostream>
#include <string>

int main(){

    std::string str;
    std::cin >> str;
    int e{0}, g{0}, y{0}, p{0}, t{0};
    for(size_t i{0}; i < str.size(); i++){
        if(str[i] == 'e' || str[i] == 'E')
        {
            e++;
        }
        else if(str[i] == 'g' || str[i] == 'G')
        {
            g++;
        }
        else if(str[i] == 'y' || str[i] == 'Y')
        {
            y++;
        }
        else if(str[i] == 'p' || str[i] == 'P')
        {
            p++;
        }
        else if(str[i] == 't' || str[i] == 'T')
        {
            t++;
        }        
    }
    int min1 = std::min(e,g);
    int min2 = std::min(y,p);
    int min3 = std::min(min1,min2);
    std::cout << std::min(t,min3);
    return 0;
}