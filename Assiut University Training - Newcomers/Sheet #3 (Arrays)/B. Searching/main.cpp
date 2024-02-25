#include <iostream>

int main(){
int size,flag{0};
int arr[size];
std::cin >>size;

for(size_t i{0}; i < size;i++){
  std::cin>>arr[i];
}
int searchnum;
std::cin>>searchnum;
for(size_t j{0}; j < size ;j++){
  if(searchnum == arr[j]){
   std::cout<<j<<std::endl;
   flag = 1;
   break;
  }
  else{
   flag = 0;
  }
}
if(flag == 0){
      std::cout<<"-1"<<std::endl;
}
 
   return 0;
}