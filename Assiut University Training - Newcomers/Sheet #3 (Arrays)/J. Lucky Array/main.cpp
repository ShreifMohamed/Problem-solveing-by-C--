#include <iostream>
using namespace std;    

int main(){

        int size,mini,mini_count{0};
        cin>>size;
        int arr[size];
        for(size_t i{0}; i < size ; i++){
            cin>>arr[i];
        }
        mini = arr[0];
        for(size_t j{0}; j < size ;j++){
         if(arr[j] == mini ){
            mini_count++;
         }
         if(arr[j] < mini ){
            mini = arr[j];
            mini_count = 1;
         }
        }
        if(mini_count % 2 == 0){
            cout<<"Unlucky"<<endl;
        }
        else{
            cout<<"Lucky"<<endl;
        }
    
   return 0;
}