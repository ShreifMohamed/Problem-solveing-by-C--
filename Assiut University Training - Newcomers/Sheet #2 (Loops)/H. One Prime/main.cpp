#include <iostream>


int main(){

int num,div,flag;
std::cin >>num; 
div = num / 2;
for(int i {2}; i <= div; ++i){

    if ((num % i == 0 )){

        std::cout<<"NO"<<std::endl;
        flag = 1;
        break; 
    }
}
    if(flag == 0) {
        std::cout<<"YES"<<std::endl;
    }
   return 0;
}