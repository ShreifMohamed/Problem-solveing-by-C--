#include <iostream>
#include <cfenv>
#include <climits>
#include <cmath>

int main(){

char x{},result_char{};
std::cin>>x;
int asc =x;
if(asc >= 97 && asc <= 122){
    asc-=32;
    result_char = asc;
std::cout<< result_char <<std::endl;
}
else if(x >= 65 && x <= 90){
    asc+=32;
    result_char = asc;
std::cout<<result_char<<std::endl;
}
    return 0;
}