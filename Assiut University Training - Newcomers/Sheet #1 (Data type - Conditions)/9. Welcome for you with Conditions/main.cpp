#include <iostream>
#include <cfenv>
#include <climits>
#include <cmath>

int main(){

unsigned A,B;
std::cin>>A>>B;
if(A > B || A == B){
std::cout<<"Yes"<<std::endl;
}
else
std::cout<<"No"<<std::endl;

    return 0;
}