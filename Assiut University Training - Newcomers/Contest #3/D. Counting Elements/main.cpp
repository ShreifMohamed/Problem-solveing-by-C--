#include <iostream>
#include <algorithm>


int main(){
   int size;
   std::cin>>size;
   long long  arr[size];
    for(size_t i{0}; i < size ; i++){
      std::cin>>arr[i];
    }

    std::sort(arr,arr+size);
    int temp {0},result{0},counter{0};

    for(size_t i{0}; i < size ; i++){
      if(i == 0){
        temp = arr[i];
        result = 1;
      }
      else{
        if(temp == arr[i]){
          result++;
        }
        else if(temp + 1 == arr[i] ){
          counter += result;
          temp = arr[i];
          result = 1;
        }
        else {
          result = 1;
          temp = arr[i];
        }
      }
    }
    std::cout<<counter;
    
    
   return 0;
}