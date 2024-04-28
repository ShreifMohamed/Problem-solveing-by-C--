#include <iostream>
#include <string>

int main(){

    std::string str;
    std::cin >> str;
    int e{0}, g{0}, y{0}, p{0}, t{0};
    for(size_t i{0}; i < str.size(); i++){
        if(str[i] == 'E' && str[i+1] == 'G' && str[i+2] == 'Y' && str[i+3] == 'P' && str[i+4] == 'T')
        {
            i += 4;
            std::cout << " ";
        }
        else{
            std::cout << str[i];
        } 
    }
    return 0;
}