#include <iostream>
#include <cfenv>
#include <climits>
#include <cmath>
#include <algorithm>

int main(){

long long  eye,mouth,body,result;
std::cin>>eye>>mouth>>body;

if(eye == 0 || body == 0){
    std::cout<<"0"<<std::endl;
    return 0;
}
else {
    if((mouth >= eye && mouth >= body) || (mouth >= body && mouth < eye)|| mouth < body && mouth >= eye){
        result = std::min(eye,body);
        std::cout<<result<<std::endl;
    }
    else if (mouth < body && mouth < eye){
        result = mouth;
        eye -= mouth;
        body -= mouth;
        result += std::min(eye/2,body);
        std::cout << result <<std::endl;
    }
}
}