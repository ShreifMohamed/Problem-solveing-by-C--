#include <iostream>

void addFunction(int x , int y)
{
   std::cout << x+y << "\n";
}
int main()
{
   int x, y;
   std::cin >> x >> y;

   addFunction(x,y);
   return 0;
}