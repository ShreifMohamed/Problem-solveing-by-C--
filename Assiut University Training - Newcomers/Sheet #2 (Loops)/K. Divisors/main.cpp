#include <iostream>
#include <cfenv>
#include <climits>
#include <cmath>

int main(){

 int num;
std::cin>>num;
for(size_t i{1}; i <= num ; ++i){
    if(num % i == 0){
        std::cout<<i<<std::endl;
    }
}
    return 0;
}