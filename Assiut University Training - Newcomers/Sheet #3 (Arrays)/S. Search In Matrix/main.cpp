#include <iostream>


int main(){

long long rows,couloms;
std::cin>>rows>>couloms;
long long arr[rows][couloms];
for(size_t i{0}; i < rows; i++){
    for(size_t j{0}; j < couloms; j++){
        std::cin>>arr[i][j];
    }
}
int x{},flag{0};
std::cin>>x;
for(size_t i{0}; i < rows; i++){
    for(size_t j{0}; j < couloms; j++){
        if(x == arr[i][j]){
            flag = 1;
            break;
        }
        
    }   
}
if(flag == 0){
        std::cout<<"will take number \n";

}
else{
    std::cout<<"will not take number \n";
}
    return 0;
}