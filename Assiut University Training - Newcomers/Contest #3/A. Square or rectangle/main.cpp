#include <iostream>

int main(){
int testcase;
long long width,height;
std::cin >>testcase;
while (testcase--)
{
  std::cin>>width>>height;
  if(width == height)
    std::cout<<"Square \n";
    else
    std::cout<<"Rectangle \n";
}   
   return 0;
}