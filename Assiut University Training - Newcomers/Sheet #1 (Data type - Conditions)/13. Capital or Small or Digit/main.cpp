#include <iostream>
#include <cfenv>
#include <climits>
#include <cmath>

int main(){

char x;
std::cin>>x;
if(x >= 97 && x <= 122){
std::cout<<"ALPHA"<<std::endl<<"IS SMALL";
}
else if(x >= 65 && x <= 90){
std::cout<<"ALPHA"<<std::endl<<"IS CAPITAL";
}
else{
std::cout<<"IS DIGIT"<<std::endl;
}
    return 0;
}