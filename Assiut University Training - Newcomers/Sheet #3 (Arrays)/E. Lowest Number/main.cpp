#include <iostream>


int main(){
   int number,index;
   std::cin>>number;
   long long int arr[number];
    for(size_t i{0}; i < number ; i++){
      std::cin>>arr[i];
    }
    long long int mini = arr[0];
    index = 1;
    for(size_t j{0}; j < number ; j++){
      if(arr[j] < mini ){
         mini = arr[j];
         index = j+1;
      }
    }
    std::cout<<mini<<" "<<(index)<<std::endl;
   return 0;
}