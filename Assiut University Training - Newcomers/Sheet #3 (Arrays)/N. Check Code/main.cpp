#include <iostream>
#include <cmath>
#include <string>

int main(){

int A,B;
std::cin>>A>>B;
std::string S;
std::cin>>S;
if((A+B+1) != S.size()){
    std::cout<<"No \n";
    return 0;
}
if( S[A] != '-'){
    std::cout<<"No \n";
    return 0;
}
    int counter = 0;
for(size_t i{0}; i < S.size(); i++){
        if( S[i] >= 48 && S[i] <= 57 && i != A )
            counter++ ;
    }

if(counter == (A+B))
    std::cout<<"Yes"<<"\n";
else
    std::cout<<"No"<<"\n";
 return 0;
}