#include <iostream>


int main(){

int N,num,max{0};
std::cin >>N; 

for(size_t i{1}; i <= N; ++i){
std::cin >>num; 
if(num >= max){
   max = num;
}
else{
   continue;
}
}
std::cout<<max<<std::endl;

   return 0;
}