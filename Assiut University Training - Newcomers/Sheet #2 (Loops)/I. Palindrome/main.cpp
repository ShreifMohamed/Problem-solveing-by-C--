#include <iostream>
#include <cfenv>
#include <climits>
#include <cmath>
#include <sstream>
#include <string>
#include <cstring>
int main(){
int myresult1,myresult2;
std::string num1;
std::cin>>num1;
int size = num1.size();
int counter{0};
char num2[size];
 int  i = {size - 1 };
for( i; i >= 0;--i){
    num2[counter] = num1[i];
    counter++;
}
myresult1 =std::stoi(num1);
myresult2 =std::stoi(num2);

if(myresult1 == myresult2){
    std::cout<<myresult1<<std::endl;
    std::cout<<"YES"<<std::endl;
}
else{
    std::cout<<myresult2<<std::endl;
    std::cout<<"NO"<<std::endl;
}

    return 0;
}