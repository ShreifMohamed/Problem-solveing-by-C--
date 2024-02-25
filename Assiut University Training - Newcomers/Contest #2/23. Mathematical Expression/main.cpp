#include <iostream>
#include <cfenv>
#include <climits>
#include <cmath>

int main(){

char S{},Q{};
int A,B,C;
std::cin>>A>>S>>B>>Q>>C;

switch (S)
{
case '+' :
    if((A+B) == C){
        std::cout<<"Yes"<<std::endl;
    }
    else{
        std::cout<<(A+B)<<std::endl;
    }
    break;
case '-' :
        if((A-B) == C){
        std::cout<<"Yes"<<std::endl;
    }
    else{
        std::cout<<(A-B)<<std::endl;
    }
    break;
case '*' :
        if((A*B) == C){
        std::cout<<"Yes"<<std::endl;
    }
    else{
        std::cout<<(A*B)<<std::endl;
    }    break;
default:
    std::cout<<"Wrong Expression"<<std::endl;
    break;
}
        return 0;
}