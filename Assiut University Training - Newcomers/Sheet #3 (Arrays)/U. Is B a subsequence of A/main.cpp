#include <iostream>

int main(){

int size,size_seq;
std::cin>>size>>size_seq;
long long arr[size];
for(size_t i{0}; i < size; i++){
    std::cin>>arr[i];
}
long long arr_seq[size_seq];
for(size_t i{0}; i < size_seq; i++){
    std::cin>>arr_seq[i];
}
int z{0},counter{0};
for(size_t i{0}; i < size; i++){
    if(arr[i] == arr_seq[z]){
        counter++;
        z++;
    }
}
if(counter == size_seq){
    std::cout<<"YES \n";
}
else
    std::cout<<"NO \n";
    return 0;
}