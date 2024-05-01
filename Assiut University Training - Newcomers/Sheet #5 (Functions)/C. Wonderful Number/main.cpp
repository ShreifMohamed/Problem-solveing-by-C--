#include <iostream>
#include <string>



bool is_palindrome(std::string s)
{
   int left {0}, right = s.length() - 1;
   while (left < right)
   {
      if (s[left] != s[right])
            return false;
      left++;
      right--;
   }
   return true;
}

std::string is_wonderful(int N)
{
   if (N % 2 == 0) // Check if N is odd
        return "NO";
   else
   {
      std::string binary_representation = "";
      while (N > 0)
      {
         binary_representation = (N % 2 == 0 ? "0" : "1") + binary_representation;
            N /= 2;
      }
      return is_palindrome(binary_representation) ? "YES" : "NO";
    }
}

int main()
{
   int N;
   std::cin >> N;

   std::cout << is_wonderful(N) << "\n";

    return 0;
}
