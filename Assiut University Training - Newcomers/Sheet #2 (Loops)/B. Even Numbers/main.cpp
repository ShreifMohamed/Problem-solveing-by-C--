#include <iostream>


int main(){

int N;
std::cin >>N;

if(N == 1 ){
   std::cout<<"-1"<<std::endl; 
   return 0;
}

for (size_t i {1}; i <= N; ++i ){
   if(i % 2 == 0){
      std::cout<<i<<std::endl;
   }
}
   return 0;
}