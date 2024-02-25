#include <iostream>


int main(){
   int number;
   std::cin>>number;
   long long int arr[number];
    for(size_t i{0}; i <= number ; i++){
      std::cin>>arr[i];
    }

    for(size_t j{0}; j <= number ; j++){
      if(arr[j] <= 10 ){
         std::cout<<"A["<<j<<"] = "<<arr[j]<<std::endl;
      }
    }
    
    
   return 0;
}