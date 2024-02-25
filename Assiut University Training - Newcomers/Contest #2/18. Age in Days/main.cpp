#include <iostream>
#include <cfenv>
#include <climits>
#include <cmath>

int main(){

int x,yaers,months,days;
std::cin>>x;
yaers = x / 365;
x -= (365*yaers);
months = x / 30 ;
x -= (30*months);
days = x ;
std::cout<<yaers<<" years"<<std::endl;
std::cout<<months<<" months"<<std::endl;
std::cout<<days<<" days"<<std::endl;

    return 0;
}