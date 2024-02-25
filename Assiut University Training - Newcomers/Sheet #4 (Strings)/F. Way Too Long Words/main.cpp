#include <iostream>
#include <string>


int main(){
int testcase{0};
std::string str1;
std::cin>>testcase;
while(testcase--){
  std::cin>>str1;
if(str1.length() <= 10){
  std::cout << str1 << "\n";
}
else{
  std::cout << str1.at(0) << str1.length() - 2 << str1.back() << std::endl;
}
}
   return 0;
}