#include <iostream>

int main(){
int size;
long long sum{0};
int num;
std::cin >>size;

for(int i{1}; i <= size;i++){
  std::cin>>num;
  sum += num;
}

 std::cout <<abs(sum)<<std::endl;

    
   return 0;
}