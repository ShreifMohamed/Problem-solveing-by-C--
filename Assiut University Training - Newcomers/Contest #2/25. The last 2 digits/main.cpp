#include <iostream>
#include <cfenv>
#include <climits>
#include <cmath>

int main(){

long long  A,B,C,D,sum,NEWA,NEWB,NEWC,NEWD;
std::cin>>A>>B>>C>>D;
NEWA = A % 100;
NEWB = B % 100;
NEWC = C % 100;
NEWD = D % 100;
sum = (NEWA*NEWB*NEWC*NEWD) % 100;
if(sum < 9){

std::cout<<"0"<<sum<<std::endl;
}
else{
        std::cout<<sum<<std::endl;
}

        return 0;
}