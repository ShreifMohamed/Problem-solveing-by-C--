#include <iostream>
#include <cfenv>
#include <climits>
#include <cmath>

int main(){

char x{};
int A,B;
std::cin>>A>>x>>B;
bool r {true};
switch (x)
{
case '>' :
    if(A > B){
        std::cout<<"Right"<<std::endl;
    }
    else{
        std::cout<<"Wrong"<<std::endl;
    }
    break;
case '<' :
    if(A < B){
        std::cout<<"Right"<<std::endl;
    }
    else{
        std::cout<<"Wrong"<<std::endl;
    }
    break;
case '=' :
    if(A == B){
        std::cout<<"Right"<<std::endl;
    }
    else{
        std::cout<<"Wrong"<<std::endl;
    }

    break;
default:
    std::cout<<"Wrong"<<std::endl;
    break;
}
        return 0;
}