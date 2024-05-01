#include <iostream>
#include <cmath>
#include <algorithm>

void Sorting(int arr[],int size)
{
  std::sort(arr, arr + size);
}

int main()
{
  int size;
  std::cin >> size;
  int arr[size];

  for (int i{0}; i < size; i++)
  {
     std::cin >> arr[i];
  }
  Sorting(arr,size);
  std::cout << arr[0] << " " << arr[size -1];
  return 0;
}