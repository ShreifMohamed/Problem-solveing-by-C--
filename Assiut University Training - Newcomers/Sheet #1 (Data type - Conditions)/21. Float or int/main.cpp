#include <iostream>
#include <cfenv>
#include <climits>
#include <cmath>

int main(){

float N;
std::cin>>N;
int num1 = N;
double result = N - num1;

if(result > 0 || result < 0 ){
    
    std::cout<<"float "<<num1<<" "<<result<<std::endl;
}
else {
    
std::cout<<"int "<<num1<<std::endl;
}
    return 0;
}