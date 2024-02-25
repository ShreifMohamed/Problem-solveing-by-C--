#include <iostream>
#include <cfenv>
#include <climits>
#include <cmath>

int main(){

int N;
std::cin>>N;

for(size_t i{1}; i <= N; ++i){
    for(size_t j{0}; j < i; ++j){

    std::cout<<"*";
}
std::cout<<std::endl;
}
    return 0;
}