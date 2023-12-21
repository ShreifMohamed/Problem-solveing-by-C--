#include <iostream>
#include <cfenv>
#include <climits>
#include <cmath>

int main(){

 int A,B,c;
std::cin>>A>>B>>c;

std::cout<<std::min(A,std::min(B,c))<<" ";
std::cout<<std::max(A,std::max(B,c))<<std::endl;

    return 0;
}