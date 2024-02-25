#include <iostream>
#include <cfenv>
#include <climits>
#include <cmath>

int main(){

int size,mx,mi,mx_index{0},mi_index{0};
std::cin>>size;
int arr[size];
for(size_t i{0}; i < size ; i++){
    std::cin>>arr[i];
}
mx = arr[0];
mi = arr[0];
for(size_t j{0}; j < size ; j++){    
    if(mx < arr[j]){
    mx = arr[j];
    mx_index = j;
    }
    if(mi > arr[j]){
        mi = arr[j];
        mi_index = j;
    }
}
std::swap(arr[mi_index],arr[mx_index]);
for(size_t k{0}; k < size ; k++){
    std::cout<<arr[k]<<" ";
}   
return 0;
}