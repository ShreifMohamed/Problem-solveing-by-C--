#include <iostream>
#include <string>
#include <algorithm>


int main(){
std::string str1;
std::cin>>str1;
std::replace(str1.begin(), str1.end(), ',', ' ');
for(auto& c : str1){
  if(isupper(c)){
    c = std::tolower(c);
  }
    else if(islower(c)){
    c = std::toupper(c);
  }
}
std::cout << str1 <<"\n";

   return 0;
}