#include <iostream>

int main(){
   int size;
   std::cin>>size;
   long long arr[size];
    for(size_t i{0}; i < size ; i++){
      std::cin>>arr[i];
    }
    for(size_t i{0}; i < (size/2); i++){
        std::cout<<arr[i]<<" "<<arr[size - i - 1]<<" ";
    }
    if(size % 2 != 0){
        std::cout<<arr[size / 2];
      }
    std::cout<<std::endl;
   return 0;
}