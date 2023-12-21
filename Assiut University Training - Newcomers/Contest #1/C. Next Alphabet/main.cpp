#include <iostream>
#include <cfenv>
#include <climits>
#include <cmath>

int main(){


char letter{};
std::cin>>letter;
int ascchar = letter;

if(ascchar == 122){ 
 std::cout<<'a'<<std::endl;
 return 0;
    }
int newascchar = ++letter;
char mychar = newascchar;
std::cout<<mychar<<std::endl;
        return 0;
}