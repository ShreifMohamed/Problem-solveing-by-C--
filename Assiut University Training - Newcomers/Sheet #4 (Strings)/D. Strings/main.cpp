#include <iostream>
#include <string>


int main(){
std::string str1, str2,str3;

std::cin>>str1>>str2;
std::cout<<str1.length()<<" "<<str2.length()<<"\n";
str3 = str1 + str2;
std::cout<<str3<<"\n";
char temp;
temp = str1[0];
str1[0] = str2[0];
str2 [0] = temp;
std::cout<<str1<<" "<<str2;

   return 0;
}