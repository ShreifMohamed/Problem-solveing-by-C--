#include <iostream>
#include <cfenv>
#include <climits>
#include <cmath>

int main(){

std::string A;
std::cin>>A;
int num1 = A[0] - '0';
int num2 = A[1] - '0';
 if (num2 == 0){
    std::cout<<"YES"<<std::endl;
 }

else if(num1 % num2 == 0 || num2 % num1 == 0){
    std::cout<<"YES"<<std::endl;
}
else
std::cout<<"NO"<<std::endl;
        return 0;
}