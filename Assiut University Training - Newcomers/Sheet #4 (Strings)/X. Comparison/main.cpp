#include <iostream>
#include <string> 
#include <algorithm>
int main()
{    
    std::string str, sub1, sub2;
    std::cin >> str;
    std::string myString{str};
    std::string smallString{str};
    for(int i{0}; i < str.length() - 1; i++)
    {
        sub1 += str[i];
        myString.erase(0,1);
        sub2 = myString;
        std::sort(sub1.begin(), sub1.end());
        std::sort(sub2.begin(), sub2.end());
        smallString = std::min(smallString, sub1+sub2);
    }
    std::cout << smallString;

  return 0;
}