#include <iostream>


int main(){

    long long int num1,num2,max,min,counter,sum,result1,result2;
    std::cin>>counter;
    while(counter-- ){
    std::cin>>num1>>num2;
    max = std::max(num1,num2);
    min = std::min(num1,num2);
    min--;
    result1 = min*(min+1)/2;
    result2 = max*(max+1)/2;
    sum = (result2 - result1);
    std::cout<<sum<<std::endl;
    
    }

   return 0;
}