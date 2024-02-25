#include <iostream>
#include <cfenv>
#include <climits>
#include <cmath>
#include <string>

int main(){

int N,num;
std::string mynumber;
std::cin>>N;

for(int i{1}; i <= N; ++i){
   std::cin>>num;
    mynumber= (std::to_string(num));

   for(int i{mynumber.size() -1}; i >= 0; --i){
    std::cout<<mynumber[i]<<" ";
   }    

std::cout<<std::endl;
}
    return 0;

}