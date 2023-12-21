#include <iostream>
#include <cfenv>
#include <climits>
#include <cmath>

int main(){


long long A,B,K;
std::cin>>A>>B>>K;

if((A % K) == 0 && (B % K) == 0){
        std::cout<<"Both"<<std::endl;
}
else if((A % K) == 0 && (B % K) != 0){
        std::cout<<"Memo"<<std::endl;
}
else if((A % K) != 0 && (B % K) != 0){
        std::cout<<"No One"<<std::endl;
}

else  {
        std::cout<<"Momo"<<std::endl;
}
        return 0;
}