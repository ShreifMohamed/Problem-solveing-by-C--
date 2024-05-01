#include <iostream>
#include <cmath>



void Swap(int x, int y)
{
  int temp = x;
  x = y;
  y = temp;
  std::cout << x << " " << y << "\n";
}
int main()
{
   int x, y;
   std::cin >> x >> y;
   Swap(x,y);
    return 0;
}
