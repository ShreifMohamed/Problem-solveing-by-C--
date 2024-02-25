#include <iostream>

int main(){

int size;
std::cin>>size;
long long arr[size][size];
for(int i{0}; i < size; i++){
    for(int j{0}; j < size; j++){
        std::cin>>arr[i][j];
    }
}
long long sum1{0},sum2{0};
for(int i{0}; i < size; i++){
    for(int j{0}; j < size; j++){
        if(i == j){
            sum1 += arr[i][j];
        }
        else if(size -1 - j == i){
            sum2 += arr[i][j];
        }
    }
}

std::cout<<abs(sum1 - sum2)<<std::endl;
    return 0;
}