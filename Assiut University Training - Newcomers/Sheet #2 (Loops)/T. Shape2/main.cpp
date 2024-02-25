#include <iostream>
#include <cfenv>
#include <climits>
#include <cmath>
#include <string>

int main(){

int lines{},i{1};
std::cin>>lines;
int spaces{lines-1};
for (i ; i<= lines ; ++i){
for(int j {1}; j <= spaces;++j){
std::cout<<" ";   
}
for(int k{1}; k < (i*2); ++k){

std::cout<<"*";
}
spaces--;
std::cout<<std::endl;
}
    return 0;

}