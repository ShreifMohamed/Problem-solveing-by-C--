#include <iostream>
#include <string>


int main(){
std::string str1;
char s{'\\'};

std::getline(std::cin, str1,s);

std::cout <<str1<<"\n";


   return 0;
}