#include <iostream>
#include <cfenv>
#include <climits>
#include <cmath>
#include <iomanip>

int main(){
double disscount,price,priceresult,result;
std::cin>>disscount>>price;
priceresult =price/(100-disscount);
result = (disscount*priceresult) + price;
std::cout <<result<<std::endl;

    
   return 0;
}