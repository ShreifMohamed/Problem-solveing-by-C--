#include <iostream>


int main(){

int N,num;
long long fac{1};
std::cin >>N; 

    while (N--){

        std::cin>>num;
        if(num == 0){
            std::cout<<"1"<<std::endl;
        }
        else{

            for(size_t i{1}; i <= num;++i){
                fac *= i;
            }
            std::cout<<fac<<std::endl;
            fac = 1;
        }

    }
   return 0;
}