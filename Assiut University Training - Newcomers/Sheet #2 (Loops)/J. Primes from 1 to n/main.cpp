#include <iostream>

int prime(int num){

int div;
div =( num / 2 );
for(int i {2}; i <= div; ++i){

    if ((num % i == 0  )){

        return -1;
         
    }
 }
 return num;
}

int main(){
int counter,result;
std::cin>>counter;
for(int i {2}; i <= counter ; ++i){
    result = prime(i);
    if (result != -1){
        std::cout<<result<<" ";
    }

}
    
   return 0;
}