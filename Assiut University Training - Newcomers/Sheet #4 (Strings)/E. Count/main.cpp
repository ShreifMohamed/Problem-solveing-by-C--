#include <iostream>
#include <string>


int main(){
std::string str1;
std::cin>>str1;
int sum{0};
for(size_t i{0}; i < str1.length(); i++){
  sum += str1[i] - '0'; 
}
std::cout<<sum<<"\n";

   return 0;
}