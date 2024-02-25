#include <iostream>
 
int main(){
 
int rows,coulms;
std::cin>>rows>>coulms;
char arr[101][101];
for(int i=1; i <= rows; i++){
    for(int j=1; j <= coulms; j++){
        std::cin>>arr[i][j];
    }
}
int index1,index2;
std::cin>>index1>>index2;
if(arr[index1][index2 - 1] != '.' && 
   arr[index1][index2 + 1] != '.' &&
   arr[index1 - 1][index2] != '.' &&
   arr[index1 + 1][index2] != '.' &&
   arr[index1 - 1][index2 - 1] != '.' &&
   arr[index1 - 1][index2 + 1] != '.' &&
   arr[index1 + 1][index2 - 1] != '.' &&
   arr[index1 + 1][index2 + 1] != '.'){
    std::cout<<"yes \n";
}
else{
    std::cout<<"no \n";
}
  return 0;
}