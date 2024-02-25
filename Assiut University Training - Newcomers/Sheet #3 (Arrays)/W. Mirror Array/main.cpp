#include <iostream>
 
int main(){
 
int size,sizearr;
std::cin>>size>>sizearr;
while(size--){
    int arr[sizearr];
    for(int i=0; i < sizearr; i++){
        std::cin>>arr[i];
    }
 
    for(int j=sizearr - 1; j >= 0; j--){
        std::cout<<arr[j]<<" ";
    }
    std::cout<<std::endl;
}
  return 0;
}