#include <iostream>
#include <cfenv>
#include <climits>
#include <cmath>

int main(){

int  A,B;
std::cin>>A>>B;

if ((A == 0 && B == 0) || abs(A - B) >= 2  ){
    std::cout<<"NO"<<std::endl;
}

else
std::cout<<"YES"<<std::endl;
        return 0;
}