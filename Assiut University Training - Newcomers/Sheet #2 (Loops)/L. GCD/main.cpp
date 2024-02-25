#include <iostream>
#include <cfenv>
#include <climits>
#include <cmath>

int main(){

int num1,num2,max,min,gcd;
std::cin>>num1>>num2;

if(num1 >= num2 ){
    max = num1;
    min = num2;
    }
    else{
    max = num2;
    min = num1;
    }
    for(size_t i{1}; i<=max;++i){
        if(num1 % i == 0 && num2 % i == 0){
            gcd = i;
        }
    }
    std::cout<<gcd<<std::endl;
    return 0;
}