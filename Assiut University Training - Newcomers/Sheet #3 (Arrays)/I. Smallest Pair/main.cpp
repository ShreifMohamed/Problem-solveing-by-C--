#include <iostream>
using namespace std;    

int main(){

   int testcases,result{0},flag{1},mini;
   cin>>testcases;
   while(testcases--){
        int size;
        cin>>size;
        int arr[size];
        for(size_t i{0}; i < size ; i++){
            cin>>arr[i];
        }
        for(size_t z{1}; z <= size;z++){
            for(size_t x{z+1}; x <= size ; x++){
                result = arr[z-1] + arr[x-1] + (x-z);
                if(flag){
                    mini = result;
                    flag = 0;
                }
                if(mini > result && flag == 0){
                    mini = result;
                }
                result = 0;
            }
        }
    flag = 1;
    cout<<mini<<endl;    
    }
    
   return 0;
}