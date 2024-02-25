#include <iostream>
#include <cfenv>
#include <climits>
#include <cmath>
#include <string>

int main(){

int number{0},start {0}, second{1};
std::cin>>number;

if(number == 1){
        std::cout<<start<<std::endl;
}
else if (number == 2 ){
        std::cout<<start<<" "<<second<<std::endl;
}
else{
        std::cout<<start<<" "<<second<<" ";
        for(int i{2}; i < number ; i++){
                int result = start + second;
                std::cout<<result<<" ";
                start = second;
                second = result;
    }
}
    return 0;

}
