#include <iostream>


int main(){

    long long  num,size,result{0};
    std::cin>>size;
    for(int i{1}; i <= size ; i++){
        int counter{0};
        std::cin>>num;
        if(num % 2 != 0){
            counter = 0;
        }
        else{
            while(num > 0){
                if(num % 2 != 0){
                    break;
                }
                else{
                    counter++;
                    num/=2;
                }
            }
        }
        if(counter > result){
            result = counter;
        }
    }
    std::cout<<result<<std::endl;        

   return 0;
}