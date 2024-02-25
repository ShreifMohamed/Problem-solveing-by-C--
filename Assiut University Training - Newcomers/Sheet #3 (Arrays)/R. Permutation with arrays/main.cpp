#include <iostream>
#include <cmath>
#include <algorithm>

int main(){

int size,flag{0};
std::cin>>size;
long long arr[size],arry[size];
for(size_t i{0}; i < size; i++){
    std::cin>>arr[i];
}
for(size_t j{0}; j < size; j++){
    std::cin>>arry[j];
}
int n1 = sizeof(arr) / sizeof(arr[0]);
int n2 = sizeof(arry) / sizeof(arry[0]);
std::sort(arr,arr+n1);
std::sort(arry,arry+n2);

for(size_t k{0}; k < size; k++){
    if(arr[k] != arry[k]){
        std::cout<<"no \n";
        flag = 1;
        break;
    }
}
if(flag == 0){
     std::cout<<"yes \n";
}
        return 0;
}