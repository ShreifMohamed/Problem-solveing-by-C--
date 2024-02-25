#include <iostream>


int main(){
  int testcase;
  std::cin>>testcase;
  
  while (testcase--){
    int size;
    std::cin>>size;
    int odd{0},even{0};
    for(int i{0}; i < size; i++){
      int value;
      std::cin>>value;
      if(value % 2 == 0){
        even++;
      }
      else{
        odd++;
      }
    }
    if(even == odd){
        std::cout<<"0 \n";
    }
    else if(size % 2 != 0){
          std::cout<<"-1 \n";
    }
    else{
          std::cout<<std::abs(even-odd )/ 2<<"\n";
    }
  }
      return 0;
}