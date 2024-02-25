#include <iostream>
#include <cfenv>
#include <climits>
#include <cmath>

int main(){
int luckynumbers [100000]{0};
luckynumbers[4] = 1;
luckynumbers[7] = 1;
luckynumbers[44] = 1;
luckynumbers[47] = 1;
luckynumbers[74] = 1;
luckynumbers[77] = 1;
luckynumbers[444] = 1;
luckynumbers[447] = 1;
luckynumbers[474] = 1;
luckynumbers[477] = 1;
luckynumbers[744] = 1;
luckynumbers[747] = 1;
luckynumbers[774] = 1;
luckynumbers[777] = 1;
luckynumbers[4444] = 1;
luckynumbers[4447] = 1;
luckynumbers[4474] = 1;
luckynumbers[4477] = 1;
luckynumbers[4744] = 1;
luckynumbers[4747] = 1;
luckynumbers[4774] = 1;
luckynumbers[4777] = 1;
luckynumbers[7444] = 1;
luckynumbers[7447] = 1;
luckynumbers[7474] = 1;
luckynumbers[7477] = 1;
luckynumbers[7744] = 1;
luckynumbers[7747] = 1;
luckynumbers[7774] = 1;
luckynumbers[7777] = 1;




int num1,num2,flag{0};
std::cin>>num1>>num2;

for(int i {num1}; i<= num2 ;++i){
    if( luckynumbers[i] == 1){
        std::cout<<i<<" ";
        flag = 1;
    }
    else{
        continue;
    }
    }

    if(flag == 0){
        std::cout<<"-1"<<std::endl;
    }
    return 0;
}
