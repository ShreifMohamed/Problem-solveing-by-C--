#include <iostream>
#include <cfenv>
#include <climits>
#include <cmath>

int main(){

int test_case_number{},result{0};
std::cin>>test_case_number;
while (test_case_number--)
{
int size,counter{0};
std::cin>>size;
int arr[size];
for(size_t i{0}; i < size; i++){
    std::cin>>arr[i];
}
result = size;
int j{0},z{0};
while (true){
    if(z == size - 1){
        break;
    }
    if(arr[j] > arr[j+1]){
        z++;
        j = z;
        continue;
    }
    result++;
    j++;
    if(j == size - 1){
        z++;
        j = z;
    }
}
std::cout<<result<<"\n";
}
    return 0;
}