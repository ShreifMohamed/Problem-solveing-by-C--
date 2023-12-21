#include <iostream>
#include <cfenv>
#include <climits>
#include <cmath>

int main(){

double x;
std::cin>>x;
if(x >= 0 && x <= 25.0000){
    std::cout<<"Interval [0,25]"<<std::endl;
}
else if(x > 25.0000 && x <= 50.0000){
    std::cout<<"Interval (25,50]"<<std::endl;
}
else if(x > 50.0000 && x <= 75.0000){
    std::cout<<"Interval (50,75]"<<std::endl;
}
else if (x >= 75.0000 && x <= 100.0000){
    std::cout<<"Interval (75,100]"<<std::endl;
}   
else{
    std::cout<<"Out of Intervals"<<std::endl;
}
 return 0;
}