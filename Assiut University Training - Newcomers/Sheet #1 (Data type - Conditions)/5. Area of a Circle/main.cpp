#include <iostream>
#include<iomanip>


int main(){

    long double x;
    std::cin>>x; 
    
    std::cout <<std::setprecision(11)<<((3.141592653)*x*x)<<std::endl;
    
    
   return 0;
}