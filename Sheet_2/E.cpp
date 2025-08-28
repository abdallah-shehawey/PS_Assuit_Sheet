#include <iostream>

#include <iomanip>
using namespace std;

int main()
{
  int N;
  cin >> N;
  int Max = 0, X;
  for (int i = 1; i <= N; i++)
  {
    cin >> X;
    {
      if (X > Max)
      {
        Max = X;
      }
    }
  }
  cout << Max;
  return 0;
}