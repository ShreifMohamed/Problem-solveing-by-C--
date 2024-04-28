#include <iostream>
#include <string>
#include <algorithm>

int main()
{

    int size, score{0};
    std::cin >> size;
    std::string str;
    std::cin >> str;
    for(int i{0}; i < str.size(); i++)
    {   
        char c = str[i];

        switch (c)
        {
        case 'V':
            score += 5;
            break;
        case 'W':
            score += 2;
            break;
        case 'X':
            if(i != str.size() - 1)
            {
                str[i+1] = '0';
            }
                break;
        case 'Y':
            if(i != str.size() - 1)
            {
                str.push_back(str[i+1]);
                str[i+1] = '0';
            }
                break;       
        case 'Z':
            if(i != str.size() - 1)
            {
                if(str[i+1] == 'V')
                {
                    score /= 5;
                    str[i+1] = '0';
                }
                else if(str[i+1] == 'W')
                {
                    score /= 2;
                    str[i+1] = '0';
                }
            }
            break; 
        }
    }
    std::cout << score;
        return 0;
}