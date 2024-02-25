#include <iostream>
#include <algorithm>
#include <vector>

int main(){
int size,k;
std::cin>>size>>k;
long long  arr[size];

for(size_t i{0}; i < size; i++){
    std::cin>>arr[i];
}
std::sort(arr , arr+size);
std::reverse(arr,arr+size);

long long sum{0};
for(size_t i{0}; i < k; i++){
    if(arr[i] < 0){
        break;
    }
    sum += arr[i];
}
std::cout<<sum<<"\n";

    return 0;
}