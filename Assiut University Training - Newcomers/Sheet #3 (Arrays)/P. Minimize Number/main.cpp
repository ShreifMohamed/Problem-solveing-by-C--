#include <iostream>
#include <cmath>

int main(){

int size,result{0};
std::cin>>size;
long long arr[size];
for(size_t i{0}; i < size; i++){
    std::cin>>arr[i];
 }
for(size_t j{0}; j < size; j++){
    int counter{0};
    if(arr[j] % 2 != 0){
        std::cout<<0<<std::endl;
        return 0;
    }
    while (arr[j] % 2 == 0){
        counter++;
        arr[j] /= 2;
    }
    if(j == 0 || counter < result){
        result = counter;
    }  
}
std::cout<<result<<"\n";

    return 0;
}