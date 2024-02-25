#include <iostream>


int main(){
   int number,flag{0};
   std::cin>>number;
   long long int arr[number];
    for(size_t i{0}; i < number ; i++){
      std::cin>>arr[i];
    }
    for(size_t j{0}; j < (number/2) ; j++){
    if(arr[j]!=arr[number - 1 -j ]){
        flag = 1;
        break;

    }        
    }
    if(flag == 0){
    std::cout<<"YES"<<std::endl;
    }
    else
        std::cout<<"NO"<<std::endl;
   return 0;
}