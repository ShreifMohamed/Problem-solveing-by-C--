#include <iostream>
#include <cfenv>
#include <climits>
#include <cmath>

int main(){

int x,result;
std::cin>>x;
result = x / 1000;
if(result % 2 == 0){
    
std::cout<<"EVEN"<<std::endl;
}
else {
    std::cout<<"ODD"<<std::endl;
}
    return 0;
}