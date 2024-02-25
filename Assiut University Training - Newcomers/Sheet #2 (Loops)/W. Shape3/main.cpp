#include <iostream>
#include <cfenv>
#include <climits>
#include <cmath>
#include <string>

int main(){

int lines{};
std::cin>>lines;
int spaces {lines - 1};

    for (int i{1} ; i <= lines ; ++i){
        for(int j{1}; j <= spaces ; ++j){
            std::cout<<" ";
        }
        for(int k{1}; k < (i*2) ; ++k){
            std::cout<<"*";
        }
        spaces--;
        std::cout<<std::endl;
        }
    for (int A{lines} ; A >= 0 ; --A){
        for(int B{spaces}; B >= 0 ; --B){
            std::cout<<" ";
        }
        for(int C{A*2-1}; C > 0  ; --C){
            std::cout<<"*";
        }
        spaces++;
        std::cout<<std::endl;
        }
    return 0;

}