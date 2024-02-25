#include <iostream>
#include <algorithm>
using namespace std;
int main(){

int size,sum{0};
cin>>size;
string value;
cin>>value;
for(size_t i{0}; i < size; i++){
sum += value[i] - '0';
}
cout<<sum<<endl;
    return 0;
}