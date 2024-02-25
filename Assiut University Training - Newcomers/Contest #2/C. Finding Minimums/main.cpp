#include <iostream>


int main(){

   int size,counter{0},seq,number,min,flag{1};
   std::cin>>size>>seq;
   for(int i{1}; i <= size ; i++){
      std::cin>>number;
      if(flag){
         min=number;
         flag=0;
      }
      else{
         if(number < min){
            min = number;
         }
      }
      counter++;
      if(counter == seq || i == size){
         std::cout<<min<<" ";
         counter = 0;
         flag = 1;
      }
   }
    
   return 0;
}