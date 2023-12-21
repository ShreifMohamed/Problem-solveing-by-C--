#include <iostream>
#include <cfenv>
#include <climits>
#include <cmath>

int main(){

double A,B;
std::cin>>A>>B;
double result = A/B;

std::cout<<"floor "<<A<<" / "<<B<<" = "<<std::floor(result)<<std::endl;
std::cout<<"ceil "<<A<<" / "<<B<<" = "<<std::ceil(result)<<std::endl;
std::cout<<"round "<<A<<" / "<<B<<" = "<<std::round(result)<<std::endl;
    return 0;
}