#include <iostream>
#include <string>

int main() {
    std::string str1, str2;
    int testcase{0};
    std::cin>>testcase;
    while (testcase--)
    {
        std::cin>>str1>>str2;
        
        auto min_lenght = std::min(str1.length(), str2.length());
        for(size_t i{0}; i < min_lenght; i++){
            std::cout << str1[i] << str2[i];   
        }

        // Append the remaining characters of the longer string
        if (str1.length() > min_lenght){
            std::cout << str1.substr(min_lenght);
        }
        else if (str2.length() > min_lenght){
            std::cout << str2.substr(min_lenght);
        }
        std::cout<<std::endl;
    }
    return 0;
}
