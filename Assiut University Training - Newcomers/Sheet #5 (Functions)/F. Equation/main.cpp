#include <iostream>
#include <cmath>

void Equation(int x, int N)
{
  long long result{0};
  for(int i{2}; i <= N; i++)
  {
    result += pow(x,i);
    i++;
  } 
  std::cout << result;
}

int main()
{
  int x, N;
  std::cin >> x >> N;
  Equation(x,N);
  return 0;
}