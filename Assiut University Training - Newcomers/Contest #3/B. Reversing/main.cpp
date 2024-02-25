#include <iostream>
#include <algorithm>

int main(){

int size;

std::cin >>size;
long long arr[size];
for(size_t i{0}; i < size;i++){
  std::cin>>arr[i];
}
for(size_t j{0}; j < size ;j++){
      if(arr[j] == 0){
        std::reverse(arr,arr+j);
      }
}
for(size_t j{0}; j < size ;j++){
      std::cout<<arr[j]<<" ";
}
 
   return 0;
}