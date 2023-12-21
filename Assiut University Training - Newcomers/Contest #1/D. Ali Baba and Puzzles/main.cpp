#include <iostream>
#include <cfenv>
#include <climits>
#include <cmath>

int main(){
int flag;
long long  A,B,C,result,myresult1,myresult2,myresult3,myresult4,myresult5,myresult6;
std::cin>>A>>B>>C>>result;
myresult1 = (A*B) - C;
myresult2 = (A*B) + C;
myresult3 = A - (B*C);
myresult4 = A + (B*C);
myresult5 = (A+B) - C;
myresult6 = (A-B) + C;

if(myresult1 == result || myresult2 == result || myresult3 == result || myresult4 == result || myresult5 == result || myresult6 == result){
         flag = 1;
}
else {
         flag = 0;
}
if(flag == 1){
  std::cout<<"YES"<<std::endl;
}
else{
        std::cout<<"NO"<<std::endl;
}

        return 0;
}