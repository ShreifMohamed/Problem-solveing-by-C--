#include <iostream>

void printFunction(int N)
{
   for(int i{1}; i <= N; i++)
   {
      std::cout << i;
      if(i != N)
         std::cout << " ";
      
   }
}
int main()
{
   int N;
   std::cin >> N;

   printFunction(N);
   return 0;
}