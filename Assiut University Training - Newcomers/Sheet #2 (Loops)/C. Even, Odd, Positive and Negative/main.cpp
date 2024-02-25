#include <iostream>


int main(){

int N,num,even{0},odd{0},pos{0},neg{0};
std::cin >>N;

for(size_t i{1}; i <= N;++i){
   std::cin>>num;
   if(num % 2 == 0 ){
   even++;
   }
   else{
      odd++;
   }
   
if(num > 0) {
      pos++;
   }
   else if(num == 0){
      continue;
   }
   else{
      neg++;
   }
   
}


std::cout<<"Even: "<<even<<std::endl;
std::cout<<"Odd: "<<odd<<std::endl;
std::cout<<"Positive: "<<pos<<std::endl;
std::cout<<"Negative: "<<neg<<std::endl;
   return 0;
}