#include <iostream>
#include <string>
#include <algorithm>

int main() {
    
    int size{0}, queries{0};
    std::cin>>size>>queries;
    std::string str1,str2;
    std::cin>>str1;
    while (queries--)
    {
        std::cin >> str2;

        if (str2 == "pop_back")
        {
            str1.pop_back();
        }
        else if (str2 == "front")
        {
            std::cout << str1.front() << std::endl;
        }
        else if (str2 == "back")
        {
            std::cout << str1.back() << std::endl;
        }
        else if (str2 == "sort")
        {
            int l, r;
            std::cin >> l >> r;
            std::sort(str1.begin() + std::min(l,r) - 1, str1.begin() + std::max(l,r));
        }
        else if (str2 == "reverse")
        {
            int l, r;
            std::cin >> l >> r;
            std::reverse(str1.begin() + std::min(l,r) - 1, str1.begin() + std::max(l,r));
        }
        else if (str2 == "print")
        {
            int pos;
            std::cin >> pos;
            std::cout << str1[pos - 1] << std::endl;
        }
        else if (str2 == "substr")
        {
            int l, r;
            std::cin >> l >> r;
            for(int i = std::min(l,r) - 1; i <= std::max(l,r) - 1; i++)
            {
                std::cout << str1[i] ;
            }
            std::cout << std::endl;
        }
        else if (str2 == "push_back")
        {
            char x;
            std::cin >> x;
            str1.push_back(x);
        }
    }

    return 0;
}

