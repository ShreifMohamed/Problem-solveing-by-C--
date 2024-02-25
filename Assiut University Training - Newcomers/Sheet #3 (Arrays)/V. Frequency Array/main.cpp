#include <iostream>

int main(){

int size,M,num;
std::cin>>size>>M;
long long arr[100001];
for(size_t i{0}; i < size; i++){
    std::cin>>num;
    if(arr[num] == 0){
        arr[num] = 1;
    }
    else{
        arr[num] = arr[num] + 1;
    }
}

for(size_t i{1}; i <= M; i++){
        std::cout<<arr[i]<<std::endl;   
    }
  return 0;
}