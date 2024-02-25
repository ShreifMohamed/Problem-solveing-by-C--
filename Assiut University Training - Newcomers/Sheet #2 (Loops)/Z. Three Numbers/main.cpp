#include <iostream>
#include <cfenv>
#include <climits>
#include <cmath>
#include <string>

int main(){

int number1{0},number2 {0},counter{0};
std::cin>>number1>>number2;

for(int i{0}; i <= number1; i++){
    for(int j{0}; j <= number1 ; j++){
        if(number2-i-j >= 0 && number2-i-j <= number1){
            counter++;
        }

    }
}
 std::cout<<counter<<std::endl;

    return 0;

}
