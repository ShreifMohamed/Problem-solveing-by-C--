#include <iostream>
#include <cmath>
#include <algorithm>

// Global const max size of matrix
const int size{500};

void swap_row (int arr[size][size],int rowAndcoulmn1, int rowAndcoulmn2, int sizeOfmatrix)
{
    for(int i{0}; i < sizeOfmatrix; i++)
    {
        int temp = arr[rowAndcoulmn1][i];
        arr[rowAndcoulmn1][i] = arr[rowAndcoulmn2][i];
        arr[rowAndcoulmn2][i] = temp;
    }
}
void swap_coulmn (int arr[size][size],int rowAndcoulmn1, int rowAndcoulmn2, int sizeOfmatrix)
{
    
  for(int i{0}; i < sizeOfmatrix; i++)
  {
    int temp = arr[i][rowAndcoulmn2];
    arr[i][rowAndcoulmn2] = arr[i][rowAndcoulmn1];
    arr[i][rowAndcoulmn1] = temp;
  }
}
void print_arry (int arr[size][size],int sizeOfmatrix)
{
  for(int i{0}; i < sizeOfmatrix; i++)
  {
    for(int j{0}; j < sizeOfmatrix; j++)
    {
        std::cout << arr[i][j] << " ";
    }
    std::cout << "\n";
  }
}

int main()
{
  int sizeOfmatrix, rowAndcoulmn1, rowAndcoulmn2;
  std::cin >> sizeOfmatrix >> rowAndcoulmn1 >> rowAndcoulmn2;
  int arr[size][size];

  for(int i{0}; i < sizeOfmatrix; i++)
  {
    for(int j{0}; j < sizeOfmatrix; j++)
    {
        std::cin >> arr[i][j];
    }
  }
  rowAndcoulmn1--;
  rowAndcoulmn2--;
  swap_row(arr, rowAndcoulmn1, rowAndcoulmn2, sizeOfmatrix);
  swap_coulmn(arr, rowAndcoulmn1, rowAndcoulmn2, sizeOfmatrix);
  print_arry(arr, sizeOfmatrix);
  return 0;
}