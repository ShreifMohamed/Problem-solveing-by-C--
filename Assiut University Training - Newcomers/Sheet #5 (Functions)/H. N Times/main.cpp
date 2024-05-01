#include <iostream>
#include <cmath>
#include <algorithm>

void print_charecters (int num,char c)
{
  for(int i{0}; i < num; i++)
  {
	std::cout << c << " ";
  }
  std::cout << "\n";
}

int main()
{
  int numOftestcase;
  std::cin >> numOftestcase;
  int numOfcharecters;
  char c;
  while (numOftestcase--)
  {
	std::cin >> numOfcharecters >> c ;
	print_charecters(numOfcharecters,c);
  }
  return 0;
}