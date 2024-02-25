#include <iostream>


int main(){
   int number;
   std::cin>>number;
   long long int arr[number];
    for(size_t i{1}; i <= number ; i++){
      std::cin>>arr[i];
    }
    for(size_t j{number}; j > 0 ; j--){
         std::cout<<arr[j]<<" ";
         
    }
    std::cout<<std::endl;
   return 0;
}