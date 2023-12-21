#include <iostream>
#include <cfenv>
#include <climits>
#include <cmath>

int main(){

std::string F1,S1,F2,S2;
std::cin>>F1>>S1;
std::cin>>F2>>S2;
if(S1 == S2)
std::cout<<"ARE Brothers"<<std::endl;
else
std::cout<<"NOT"<<std::endl;

    return 0;
}