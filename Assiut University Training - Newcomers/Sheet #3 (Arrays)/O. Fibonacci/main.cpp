#include <iostream>
#include <cmath>
    
int main(){
long long postion,start{0},end{1},result{0};
std::cin>>postion;
if(postion == 1){
    std::cout<<start<<"\n";
}
else if(postion == 2){
    std::cout<<end<<"\n";
}
else{
    for(size_t i{3}; i <= postion ; i++){
        result = start + end;
        start = end;
        end = result;
    }
    std::cout<<end<<"\n";
}
    return 0;
}