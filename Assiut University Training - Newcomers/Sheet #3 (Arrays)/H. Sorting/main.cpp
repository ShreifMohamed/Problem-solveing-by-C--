#include <iostream>
#include<algorithm>
using namespace std;
void selectionSort(int arr[], int n)
{
	int minIdx;
	                               //0  1  2  3  4  5
	for (int i = 0; i < n - 1; i++)//60 40 50 30 10 20
	{	
		minIdx = i;//4
    
		for (int j = i + 1; j < n; j++)
			if (arr[j] < arr[minIdx])
				minIdx = j;
	            swap(arr[minIdx], arr[i]);
	
	}
}



void print(int arr[], int size)
{

	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	    cout << endl;

}


int main(){

   int number;
   std::cin>>number;
   int arr[number];
    for(size_t i{0}; i < number ; i++){
      std::cin>>arr[i];
    }
    number = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr,number);
    print(arr,number);
    
   return 0;
}