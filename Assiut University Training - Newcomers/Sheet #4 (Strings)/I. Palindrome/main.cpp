#include <iostream>
#include <string>
#include <algorithm>


int main(){
    std::string str1,str2;
	std::cin>>str1;
    str2 = str1;
    std::reverse(std::begin(str1),std::end(str1));

    if(str1 == str2){
    std::cout << "YES\n";
    }
	else{std::cout << "NO\n";}
    
   return 0;
}