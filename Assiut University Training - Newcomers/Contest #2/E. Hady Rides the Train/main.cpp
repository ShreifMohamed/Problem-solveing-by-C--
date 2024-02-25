#include <iostream>


int main(){

    long long int seet,row,coulm;
    std::cin>>seet;
    row = seet/4;
    if(row % 2 == 0){
        coulm = seet % 4;
    }
    else{
        coulm = 3 - (seet % 4);
    }
      
        std::cout<<row<<" "<<coulm<<std::endl;
    
    

   return 0;
}