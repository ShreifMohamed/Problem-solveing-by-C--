#include <iostream>
#include <cfenv>
#include <climits>
#include <cmath>
#include <string>

int main(){

int num1,num2,max,min,sum;
int count {};
while (count < 3){

std::cin>>num1>>num2;
if(num1 <= 0 || num2 <= 0){
    return 0;
}
else{
    max =std::max(num1,num2);
    min = std::min(num1,num2);
for(int i{min}; i <= max; ++i){
   
std::cout<<i<<" ";
sum +=i;
}
std::cout<<" sum ="<<sum<<std::endl;
sum = 0;
}
}
    return 0;

}