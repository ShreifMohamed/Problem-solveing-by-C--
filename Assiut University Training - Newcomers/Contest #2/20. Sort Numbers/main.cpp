#include <iostream>
#include <cfenv>
#include <climits>
#include <cmath>

int main(){

int num1,num2,num3,max,min,def;
std::cin>>num1>>num2>>num3;

if(num1 >= num2 && num1 >= num3){
    max = num1;
    if(num2 >= num3){
        def = num2;
        min = num3;
    }
    else{
        def = num3;
        min = num2;
    }
}
else if(num2 >= num1 && num2 >= num3){
    max = num2;
    if(num1 >= num3){
        def = num1;
        min = num3;
    }
    else{
        def = num3;
        min = num1;
    
}
}
else{
    max = num3;
    if(num1 >= num2){
        def = num1;
        min = num2;
    }
    else{
        def = num2;
        min = num1;
    
}
}
std::cout<<min<<std::endl;
std::cout<<def<<std::endl;
std::cout<<max<<std::endl;
std::cout<<std::endl;
std::cout<<num1<<std::endl;
std::cout<<num2<<std::endl;
std::cout<<num3<<std::endl;
    return 0;
}