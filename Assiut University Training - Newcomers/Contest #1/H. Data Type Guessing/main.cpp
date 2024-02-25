#include <iostream>
#include <cfenv>
#include <climits>
#include <cmath>

int main(){

double  a,k,n;
std::cin>>n>>k>>a;
long long x = (k*n) / a;
double q = (k*n) / a ;
 double test = q - x ;


if (test > 0 ){

    std::cout <<"double"<<std::endl; 
}

else if(q > 2147483647 ){
    std::cout<<"long long"<<std::endl;
}
else{
std::cout<<"int"<<std::endl;
}

    return 0;
}
