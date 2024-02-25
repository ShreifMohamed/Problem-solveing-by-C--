#include <iostream>
#include <cfenv>
#include <climits>
#include <cmath>

int main(){

double  A,B,C,D,res1,res2;
std::cin>>A>>B>>C>>D;
res1 = B*log(A);
res2 = D*log(C);

if(res1 > res2){
    std::cout<<"YES"<<std::endl;
}
else
std::cout<<"NO"<<std::endl;
        return 0;
}