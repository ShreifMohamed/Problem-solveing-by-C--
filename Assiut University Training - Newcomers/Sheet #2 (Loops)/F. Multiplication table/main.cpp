#include <iostream>


int main(){

int N;
std::cin >>N; 

for(size_t i{1}; i <= 12; ++i){
 
std::cout<<N<<" * "<<i<<" = "<<(N*i)<<std::endl;
}
   return 0;
}