#include <iostream>
using namespace std;

int main()
{
  unsigned long long int N, M;
  cin >> N >> M;
  while (N >= 10)
  {
    N %= 10;
  }
  while (M >= 10)
  {
    M %= 10;
  }
  cout << M + N;
  return 0;
}