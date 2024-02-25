#include <iostream>
#include <cfenv>
#include <climits>
#include <cmath>
#include <string>

int main(){

int lines{};
std::cin>>lines;
int counter = 1;
    for (int i{1} ; i<= lines ; i++){
    
        if(counter % 4 == 0){
            counter++;
            std::cout<<"PUM"<<std::endl;
            i--;
            continue;
        }
            std::cout<<counter<<" ";
            counter++;
            std::cout<<counter<<" ";
            counter++;
            std::cout<<counter<<" ";
            counter++;

        }

    std::cout<<"PUM";
    return 0;

}