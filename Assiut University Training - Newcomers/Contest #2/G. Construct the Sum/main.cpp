#include <iostream>


int main(){

    long long  num1,num2,size,result,count,arr[1000005];
    std::cin>>size;
    for(int i{1}; i <= size ; i++){
        
        std::cin>>num1>>num2;
        if(num1 *(num1+1)/2 < num2){
            std::cout<<"-1";
        }
        else{
            result=0;

            for(int j{num1}; j >= 1 ; j--){
                if(result+j <= num2){
                    result += j;
                    arr[count] = j;
                    count++;
                }
                if(result == num2){
                    break;
                }
                
            }
        }
        for(int k{0}; k < count ; k++){
            std::cout<<arr[k]<<" ";
        }
        count = 0;
        std::cout<<std::endl;        

    }

   return 0;
}