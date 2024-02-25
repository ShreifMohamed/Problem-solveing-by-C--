#include <iostream>
#include <cfenv>
#include <climits>
#include <cmath>

int main(){

int test_case_number;
std::cin>>test_case_number;
while (test_case_number--)
{
int size;
std::cin>>size;
int arr[size];
for(size_t i{0}; i < size; i++){
    std::cin>>arr[i];
    std::cout<<arr[i]<<" ";
}
int j = 0;
int z = 0;
int mx{};
while (true){
    if( z == size - 1){
        break;
    }
    if(j == z){
        mx = std::max(arr[j],arr[j+1]);
    }
    else{
        mx = std::max(mx,arr[j+1]);
    }
    std::cout<<mx<<" ";
    j++;
    if(j == size - 1){
        z++;
        j = z;
    }
}
std::cout<<std::endl;

}
    return 0;
}