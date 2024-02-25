#include <iostream>
#include <cfenv>
#include <climits>
#include <cmath>
#include <string>

int main(){

int num1,num2,max,min,sum;
int count {},inum{};
std::cin>>count;
while (inum < count){

std::cin>>num1>>num2;
    max =std::max(num1,num2);
    min = std::min(num1,num2);
    ++min;
for(int i{min}; i < max; ++i){
   if(i % 2 != 0){
    sum +=i;
}
}
std::cout<<sum<<std::endl;
sum = 0;
++inum;

}
    return 0;

}