#include <iostream>
#include <string>
#include <algorithm>


int main(){
std::string str1;
int testcase;
std::cin>>testcase;
while(testcase--){
	std::cin>>str1;
	bool good = false;

	for(size_t i{0}; i+2 < str1.length(); i++){

  		if(str1.substr(i, 3) == "010" || str1.substr(i, 3) == "101"){
    		good = true;
			break;
  		}
	}

if(good){
	std::cout << "Good\n";
}
else{
	std::cout << "Bad\n";
}
}
   return 0;
}