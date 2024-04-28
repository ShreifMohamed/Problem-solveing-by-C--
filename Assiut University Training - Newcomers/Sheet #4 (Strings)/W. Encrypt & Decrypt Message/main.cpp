#include <iostream>
#include <string> 

int main()
{    
    int Q;
    std::cin >> Q;
    std::string str;
    std::cin >> str;
    std::string Key ="PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    std::string Original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int index {0};
    if(Q == 1)
    {
        for(int i{0}; i < str.size(); i++)
        {
            for(int j{0}; j < Original.size(); j++)
            {
                if(str[i] == Original[j])
                {
                    index = j;
                    break;
                }
            }
            std::cout << Key[index];
        }
    }
    else
    {
        for(int i{0}; i < str.size(); i++)
        {
            for(int Z{0}; Z < Key.size(); Z++)
            {
                if(str[i] == Key[Z])
                {
                    index = Z;
                    break;
                }
            }
            std::cout << Original[index];
        }
    }
  return 0;
}