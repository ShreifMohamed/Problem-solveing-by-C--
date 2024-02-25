#include <iostream>
#include <string>


int main(){
std::string str1, str2;

std::cin>>str1>>str2;
if( str1.compare(str2) < 0){
    std::cout<<str1<<"\n";
}
else if( str1.compare(str2) > 0){
    std::cout<<str2<<"\n";
}
else{
    std::cout<<str1<<"\n";
}
   return 0;
}