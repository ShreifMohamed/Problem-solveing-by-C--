#include <iostream>
#include <cfenv>
#include <climits>
#include <cmath>

int main(){

char x{};
int A,B;
std::cin>>A>>x>>B;
switch (x)
{
case '+' :
    std::cout<<(A+B)<<std::endl;
    break;
case '-' :
    std::cout<<(A-B)<<std::endl;
    break;
case '*' :
    std::cout<<(A*B)<<std::endl;
    break;
case '/' :
    std::cout<<(A/B)<<std::endl;
    break;
default:
    std::cout<<"wrong expression";
    break;
}

    return 0;
}