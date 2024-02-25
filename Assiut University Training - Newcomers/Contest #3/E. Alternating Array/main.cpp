#include <iostream>


int main(){
   int size,value;
   std::cin>>size;
   long long  arr[size],arr2[size];
    for(size_t i{0}; i < size ; i++){
      std::cin>>value;
      arr[i] = value;
      arr2[i] = value;
    }

    int counter{0},temp{0},counter2{1},temp2{0};
    arr2[0] *= -1;
    for(size_t i{0}; i < size ; i++){
      if(i == 0){
            temp = arr[i];
            temp2 = arr2[i];
      }
      else{
          if((temp > 0 && arr[i] > 0) || (temp < 0 && arr[i] < 0) ){
            arr[i] *= -1;
            counter++;
          }
          if((temp2 > 0 && arr2[i] > 0) || (temp2 < 0 && arr2[i] < 0) ){
            arr2[i] *= -1;
            counter2++;
          }
          temp = arr[i];
          temp2 = arr2[i];
      }    
    }
    auto result = (counter < counter2)? counter:counter2;
    std::cout<<result;
   return 0;
}