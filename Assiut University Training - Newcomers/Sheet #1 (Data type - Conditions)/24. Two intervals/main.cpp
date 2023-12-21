#include <iostream>
#include <cfenv>
#include <climits>
#include <cmath>

int main(){


int l1,l2,r1,r2;
std::cin>>l1>>r1>>l2>>r2;

if ((l1 <= r1)&&(l2 <= r2)){

    if(l2 >= l1 && l2 <= r1 && r1 >= r2){
        std::cout<<l2<<" "<<r2<<std::endl;
    }
    else if(l2 >= l1 && l2 <= r1 && r1 <= r2){
        std::cout<<l2<<" "<<r1<<std::endl;
    }
    else if(l1 <= r2 && l2 <= l1 && l2 <= r1 && r1 <= r2){
        std::cout<<l1<<" "<<r1<<std::endl;
    }
    else if(l1 <= r2 && l2 <= l1 && l2 <= r1 && r1 >= r2){
        std::cout<<l1<<" "<<r2<<std::endl;
    }
    else{
        std::cout<<"-1"<<std::endl;
    }
}
else{
    std::cout<<"-1"<<std::endl;
    
    }

        return 0;
}