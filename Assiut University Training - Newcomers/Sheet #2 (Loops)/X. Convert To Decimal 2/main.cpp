#include <iostream>
#include <cfenv>
#include <climits>
#include <cmath>
#include <string>

int main(){

int lines{0};
std::cin>>lines;
long long num;
    for(int i{0}; i < lines ; i++){
        std::cin>>num;
        int ones = 0;
        while (num > 0){
            if( num % 2 == 1){
                ones++;
            }
            num /=2;
        }
        long long sum = 0;
        for(int j{0}; j < ones ; j++){
            sum += 1*pow(2,j);
        }
        std::cout<<sum<<std::endl;
        
    }
    return 0;

}
