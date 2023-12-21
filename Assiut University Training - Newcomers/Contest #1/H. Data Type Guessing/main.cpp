#include <iostream>
#include <cfenv>
#include <climits>
#include <cmath>

int main(){

double  n,k,a;
std::cin>>n>>k>>a;
double result = (n * k) / a;
long long mynumber = result ;
double myresult = result - mynumber ;

if (myresult > 0 ){

    std::cout <<"double"<<std::endl; 
}

else if(mynumber <= 2147483647 ){
    std::cout<<"int"<<std::endl;
}
else{
std::cout<<"long long"<<std::endl;
}

    return 0;
}
