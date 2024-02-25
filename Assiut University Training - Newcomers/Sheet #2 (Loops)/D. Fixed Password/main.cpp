#include <iostream>


int main(){

int pass;


while (true)
{
std::cin >>pass;
if(pass == 1999){
   std::cout<<"Correct"<<std::endl;
   break;
}
else{
   std::cout<<"Wrong"<<std::endl;
}
}

   return 0;
}