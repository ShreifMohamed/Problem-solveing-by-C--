#include <iostream>


int main(){

int count;
std::cin>>count;
for(int i {0}; i < count ; i++){
   for(int j{0}; j < count ; j++){
      if( i == j && i != count/2 && j != count/2){
         std::cout<<"\\";
      }
      else if(i == count/2 && j == count/2){
         std::cout<<"X";
      }
      else if ( j != count/2 && i == ((count-1)-j)){
         std::cout<<"/";
      }
      else{
         std::cout<<"*";
      }
   }
   std::cout<<std::endl;
}

   return 0;
}