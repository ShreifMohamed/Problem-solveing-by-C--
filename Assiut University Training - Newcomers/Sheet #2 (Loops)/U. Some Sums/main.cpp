#include <iostream>
#include <cfenv>
#include <climits>
#include <cmath>
#include <string>

int main(){

int number{},range1{},range2{},sum{0};
std::cin>>number>>range1>>range2;

for (int i{1} ; i<= number ; ++i){
    if(i / 10 == 0 ){
        if(i >= range1 && i <= range2){
            sum += i;
            }
        }
        else{
            int mynumber = i;
            int mysum = 0;
            while (mynumber){
               int digit = mynumber % 10;
               mysum += digit;
               mynumber /= 10;
            }
            if(mysum >= range1 && mysum <= range2){
                sum +=i;
            }
        }
    }
    
std::cout<<sum;
    return 0;

}