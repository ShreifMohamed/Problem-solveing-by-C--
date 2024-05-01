#include <iostream>
#include <cmath>



bool is_prime(int num)
{
   int flag {0};
   int newNum = std::sqrt(num);
   if(num <= 1)
      flag = 1;
   else
   {
      for(int i{2}; i <= newNum; i++)
      {
         if(num % i == 0)
         {
            flag = 1;
            break;
         }
      }
   }
   return flag;
}

int main()
{
   int numoFtestcases;
   std::cin >> numoFtestcases;
   while (numoFtestcases--)
   {
      int num;
      std::cin >> num;
      if(is_prime(num) == 1)
         std::cout << "NO\n";
      else
         std::cout << "YES\n";
   }
    return 0;
}
